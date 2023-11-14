#include<iostream>
#include<string>

using namespace std;


void reverseStr(string& str)
{
    int n = str.length();
 
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

bool isPalindrome(string s) {
    string converted;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = tolower(s[i]);
        }
        if(s[i] >= 32 && s[i] <= 64) {
            s[i] = 0;
        }
    }
    cout << s << "\n";
    converted = s;
    reverseStr(converted);
    cout << "converted: " << converted << "\n";
    return converted == s;
}


int main() {
    cout << isPalindrome("A man, a plan, a canal: Panama") << "\n";
    return 0;
}