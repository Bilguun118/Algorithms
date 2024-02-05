#include<iostream>
#include<string>

using namespace std;

string appendDelete(string t, string s, int k) {
    string ans = "No";
    int n = t.size();
    int m = s.size();
    int count;
    if (n > m) count = n;
    else count = m;
    int t_ptr = 0, s_ptr = 0;
    while(t_ptr < n && s_ptr < m) {
        if(s[s_ptr] == t[t_ptr]) {
            count--;
            s_ptr++;
        }
        t_ptr++;
    }
    cout << count << "\n";
    if(count > k) return ans;
    ans = "Yes";
    return ans;
}

int main() {
    appendDelete("qwerasdf", "qwerbsdf", 6);
    return 0;
}