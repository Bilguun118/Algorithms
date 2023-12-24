#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main() {
    string word = "  Hello World  ";
    string ans;
    stack<char>st;
    reverse(word.begin(), word.end());
    for(int i = 0; i < word.size(); i++) {
        // st.push(word[i]);
        cout << word[i];
    }
    // while(!st.empty()) {
    //    ans += st.top();
    //    st.pop(); 
    // }
    // for(int i = 0; i < ans.size(); i++) {
    //     cout << ans[i];
    // }

    return 0;
}