#include<iostream>
#include<vector>
#include<string>

using namespace std;


string convert(string s, int numRows) {
    int n = s.size();
    string ans;
    if(n < 1) return ans;
    vector<string>ret(n, "");
    bool asc = false;
    int idx = 0;
    for(int i = 0; i < n; i++) {
        if(asc) {
            
        } else {

        }
    }
}

int main() {
    string s = "PAYPALISHIRING";
    string ans = convert(s, 3);
    return 0;
}