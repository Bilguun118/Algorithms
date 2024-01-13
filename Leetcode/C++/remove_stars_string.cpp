#include<iostream>
#include<string>
#include<stack>
#include <algorithm> 

using namespace std;


string removeStars(string s) {
    stack<char> init;
    string ret = "";
    for (auto c : s) {
        init.push(c);
    }
    int stars = 0;
    while (!init.empty()) {
        char c = init.top();
        init.pop();
        if (c == '*') stars++;
        else {
            if (stars > 0) {
                stars--;
            }
            else {
                ret += c;
            }
        }
    }
    string ans;
    for(int i = ret.size() -1; i >= 0; i--){
        ans+=ret[i];
    }
    return ans;
}

string removeStarsSecond(string s) {
    string ans;
    string ret;
    stack<char>st;
    int n = s.size();
    for(int i = 0; i < n; i++) {
        if(s[i] == '*') {
            st.pop();
        } else {
            st.push(s[i]);
        }
    }
    while(!st.empty()) {
        char currentChr = st.top();
        ret += currentChr;
        st.pop();
    }
    for(int i = ret.size() -1; i >= 0; i--){
        ans+=ret[i];
    }
    return ans;
}




int main() {
    string s = "leet**cod*e";
    string s2 = "erase*****";
    string ans = removeStars(s);
    cout << ans;
    return 0;
}