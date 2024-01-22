#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

string sherlockValidStr(string s) {
    string ans = "NO";
    int n = s.size();
    int count = 0;
    int occur_count = 0; 
    unordered_map<char, int>mem;
    for(int i = 0; i < n; i++) mem[s[i]]++;
    for(auto j: mem) {
        if (count == 0) count = j.second;
        if(count != 0 && count != j.second) {
            occur_count++;
            cout << j.first << "\n";
        }
    }
    cout << occur_count;
    return ans;
}

int main() {
    string s = "aabbccddeefghi";
    string ans = sherlockValidStr(s);
    cout << ans;
    return 0;
}