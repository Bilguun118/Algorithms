#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>

using namespace std;

bool closeStrings(string word1, string word2) {
    int n = word1.size();
    int m = word2.size();
    if(n != m) return false;
    
    unordered_map<char, int>mem1;
    unordered_map<char, int>mem2;
    vector<int>vfr1;
    vector<int>vfr2;
    for(int i = 0; i < n; i++) {
        mem1[word1[i]]++;
    }
    for(int i = 0; i < m; i++) {
        mem2[word2[i]]++;
    }
    for(auto j:mem1) {
        if(mem2[j.first] == 0) {
            return false;
        }
        vfr1.push_back(mem1[j.first]);
        vfr2.push_back(mem2[j.first]);
    }
    sort(vfr1.begin(), vfr1.end());
    sort(vfr2.begin(), vfr2.end());
    return vfr1 == vfr2;
}

int main() {
    string a = "abc";
    string b = "bca";
    bool ans = closeStrings(a,b);
    cout << ans;
    return 0;
}