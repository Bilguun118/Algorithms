#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<vector<string>>groupByAnagram(vector<string>words) {
    vector<vector<string>>ans;
    unordered_map<string, vector<string>>memo;
    for(int i = 0; i < words.size(); i++) {
        string current_word = words[i];
        sort(current_word.begin(), current_word.end());
        memo[current_word].push_back(words[i]);
    }
    for(auto j: memo) {
        ans.push_back(j.second);
    }
    return ans;
}

int main() {
    vector<string>words = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>>res;
    res = groupByAnagram(words);
    return 0;
}