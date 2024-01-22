#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int makeAnagrams(string s1, string s2) {
    int ans = 0;
    int n1 = s1.size();
    int n2 = s2.size();
    unordered_map<char, int>mem;
    for(int i = 0; i < n1; i++) mem[s1[i]]++;
    for(int i = 0; i < n2; i++) mem[s2[i]]--;
    for(auto j: mem) ans += abs(j.second);
    return ans;
}

int main() {
    string s1 = "ccede";
    string s2 = "afcad";
    int ans = makeAnagrams(s1,s2);
    cout << ans;
    return 0;
}