#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>

using namespace std;

string sherlockValidStr(string s) {
    string ans = "NO";
    int n = s.size();
    int count = 0;
    int occur_count = 0; 
    unordered_map<char, int>mem;
    vector<int>dev;
    for(int i = 0; i < n; i++) mem[s[i]]++;
    for(auto j: mem) dev.push_back(j.second);
    for(int i = 0; i < dev.size(); i++) cout << dev[i] << "\n";
    cout << occur_count;
    return ans;
}

int main() {
    string s = "aabbccddeefghi";
    string ans = sherlockValidStr(s);
    cout << ans;
    return 0;
}