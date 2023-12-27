#include<iostream>
#include<string>
#include<vector>

using namespace std;

string reverseStr(string word) {
    vector<string>subs;
    string ans;
    int n = word.size();
    for(int i = 0; i < n; i++) {
        string temp;
        if(word[i] != ' ') {
            temp += word[i++];
        }
        // ensure that here is no whitespae get in temp string
        while((word[i] != ' ') && i < n) {
            temp += word[i];
            i++;
        }
        if (!temp.empty()){
            // ignore doubled whitespaces between words
            cout << "THE TEMP: " << temp << "\n";  
            subs.push_back(temp);
        }
    }
    for(int i = subs.size()-1; i >= 0; i--) {
        ans += subs[i];
        // each word has space between them
        if(i > 0) ans += ' ';
    }
    return ans;
}

int main() {
    string word = "a good   example";
    string ans = reverseStr(word);
    cout << ans;
    return 0;
}