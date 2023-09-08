#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
    int TC;
    cin >> TC;
    TC *= 2;
    queue<string>mem_prev;
    while(TC--) {
        string word;
        cin >> word;
        if(TC&1) {
            mem_prev.push(word);
        } else {
            string ans;
            string word_to_check = mem_prev.front();
            for(int i = 0; i < word.size(); i++) {
                if(word[i] == word_to_check[i]) {
                    ans+='.';
                } else {
                    ans+='*';
                }
            }
            mem_prev.pop();
            cout << word_to_check << "\n";
            cout << word << "\n";
            cout << ans << "\n";
            cout << "\n";
        }

    }
    return 0;
}