#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

bool isPalindrome(string s) {
    string converted;
    for(int i = 0; i < s.size(); i++) {
        
        if((s[i] >= 32 && s[i] <= 47) || (s[i] >= 58 && s[i] <= 64)) continue;
        if((s[i] >= 91 && s[i] <= 96) || (s[i] >= 123 && s[i] <= 127)) continue;

        if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = tolower(s[i]);
        }

        converted += s[i];
    }
    string chk = converted;
    reverse(converted.begin(), converted.end());
    return converted == chk;
}


int main() {
    cout << isPalindrome("A man, a plan, a canal: Panama") << "\n";
    return 0;
}