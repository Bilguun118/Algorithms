#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<stack>

using namespace std;

string decodeString(string s) {
    // cannot work on nested values
    stack<string>st;
    int n = s.size();
    string ans;
    for(int i = 0; i < n; i++) {
        int currentNum = -1;
        string digit;
        while(isdigit(s[i])) {
            digit += s[i];
            i++;
        }
        currentNum = atoi(digit.c_str());
        if(s[i] == '[') {
            i++;
            string toPush;
            while(s[i] != ']') {
                toPush += s[i];
                i++;
            }
            while(currentNum--) {
                st.push(toPush);
            }
        }
    }
    vector<string>ret;
    while(!st.empty()) {
        ret.push_back(st.top());
        st.pop();
    }
    reverse(ret.begin(), ret.end());
    for(int i = 0; i < ret.size(); i++) ans += ret[i];
    return ans;
}

string decodeStringSt(string s) {
    stack<char>st;
    stack<string>stS;
    int n = s.size();
    string ans;
    for(int i = 0; i < n; i++) {
        if(s[i] != ']') st.push(s[i]);
        else {
            string substr;
            while(!st.empty() && st.top() != '[') {
                substr += st.top();
                st.pop();
            }
            st.pop();
            // from here there should be at least one number in char format
            string num;
            while(!st.empty() && isdigit(st.top())) {
                num = st.top() + num;
                st.pop();
            }
            int numFreq = atoi(num.c_str());
            reverse(substr.begin(), substr.end());
            while(numFreq--) {
                for(int j = 0; j < substr.size(); j++) {
                    st.push(substr[j]);       
                }
            }
        }
    }
    vector<char>ret;
    while(!st.empty()) {
        ret.push_back(st.top());
        st.pop();
    }
    for(int i = ret.size() - 1; i >= 0; i--) ans += ret[i];
    return ans;
}

int main() {
    string s = "3[a]2[bc]";
    string s2 = "3[a2[c]]";
    string ans = decodeStringSt(s2);
    cout << ans;
    return 0;
}