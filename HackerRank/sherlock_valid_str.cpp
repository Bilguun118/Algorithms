#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
#include<set>

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

string sherlockValidStrAlt(string s) {
    string ans = "NO";
    int n = s.size();
    int count[26] = {};
    for (int i = 0; i < n; i++) count[s[i] - 'a']++; // store all char frequency in alphabetical order
    for(int i = -1; i < 26; i++) {
        if(i >= 0 && count[i] == 0) continue;
        if(i >= 0) count[i]--; // decrease one by one
        set<int>check;
        for(int j = 0; j < 26; j++) {
            if(count[j]) check.insert(count[j]);
        }
        // for(auto itr: check) cout << itr << "\n";
        if(check.size() == 1) ans = "YES";
        if(i >= 0) count[i]++;
    }
    return ans;
}

int main() {
    string s = "aabbccddeefghi";
    string ans = sherlockValidStrAlt(s);
    cout << ans;
    return 0;
}