#include<iostream>
#include<string>

using namespace std;

bool isSubsequence(string s, string t) {
    if(s.size() > t.size()) return false;
    string ans;
    int tpoint = 0;
    int spoint = 0;
    while(tpoint < t.size()) {
        if(t[tpoint] == s[spoint]) {
            ans += t[tpoint];
            spoint++;
        }
        tpoint++;
    }
    if(ans == s) return true;
    else return false;
}

int main() {
    string s = "abc";
    string t = "ahbgdc";
    bool res = isSubsequence(s,t);
    cout << res << "\n";
    return 0;
}