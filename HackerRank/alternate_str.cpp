#include<iostream>
#include<string>

using namespace std;

int alternateString(string s) {
    int n = s.size();
    int ans = 0;
    if(n <= 1) return ans;
    int i_ptr = 0, s_ptr = 1;
    while(s_ptr < n) {
        while(s[i_ptr] == s[s_ptr]) {
            ans++;
            s_ptr++;
            i_ptr++;
        }
        s_ptr++;
        i_ptr++;
    }
    return ans;
}

int main() {
    string s = "AAABBB";
    int ans = alternateString(s);
    cout << ans << "\n";
    return 0;
}