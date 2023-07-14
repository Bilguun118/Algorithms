#include <iostream>
#include <algorithm>
using namespace std;


void ReverseStr(string& word, int start, int end) {
    char temp;
    while(start < end) {
        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;
        start++;
        end--;
    }
}


int main() {
    string s, t;
    cin >> s;
    cin >> t;
    ReverseStr(t, 0, t.length() - 1);
    if (s != t) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}