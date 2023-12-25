#include<iostream>
#include<string>

using namespace std;

bool check(char c) {
    c = towlower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}


string reverseVowels(string s) {
    int n = s.size();
    int left_pointer = 0;
    int right_pointer = n-1;
    while(left_pointer < right_pointer) {
        // try to swap two vowels
        if(check(s[left_pointer]) && check(s[right_pointer])) {
            swap(s[left_pointer], s[right_pointer]);
            left_pointer++;
            right_pointer--;            
        }
        if(!check(s[left_pointer])) left_pointer++;
        if(!check(s[right_pointer])) right_pointer--;
    }
    return s;
}

int main() {
    string s = "leetcode";
    string ans = reverseVowels(s);
    cout << ans;
    return 0;
}