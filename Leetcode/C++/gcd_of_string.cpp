#include<iostream>
#include<string>
#include<numeric>

using namespace std;

string gcdOfStrings(string str1, string str2) {
    if(str1+str2 == str2+str1) return str1.substr(gcd(str1.size(), str2.size()));
    return "";
}

int main() {
    string str1 = "ABCABC";
    string str2 = "ABC";
    string ans = gcdOfStrings(str1, str2);
    cout << ans;
    return 0;
}