#include<iostream>
#include<string>

using namespace std;


int naiveApproach(int n1, int n2) {
    int ans;
    auto s1 = to_string(n1);
    auto s2 = to_string(n2);
    int m = s1.size();
    string ansStr(m, 0);
    for(int i = 0; i < s1.size(); i++) {
        if(s1[i] != s2[i]) ansStr[i] = '1'; 
    }
    cout << ansStr;
    return ans;
}

int naiveApproachTwo(int n1, int n2) {
    int ans = 0;
    string ansStr;
    while(n1 > 0 && n2 > 0) {
        int digit1 = n1 % 10;
        int digit2 = n2 % 10;
        cout << "d1: " << digit1 << " d2: " << digit2 << "\n"; 
        n1 /= 10;
        n2 /= 10;
        if(digit1 != digit2) {
            ansStr += '1';
        } else {
            ansStr += '0';
        }
    }
    cout << ansStr << "\n";
    return ans;
}

string strApproach(string s1, string s2) {
    int n = s1.size();
    string ans;
    for(int i = 0; i < n; i++) {
        if(s1[i] != s2[i]) {
            ans += '1';
        } else {
            ans += '0';
        }
    }
    return ans;
}

int main(){
    string n1,n2;
    cin >> n1 >> n2;
    string ans = strApproach(n1,n2);
    cout << ans << "\n";
    return 0;
}