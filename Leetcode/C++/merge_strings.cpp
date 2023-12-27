#include<iostream>
#include<string>

using namespace std;

string mergeAlternately(string word1, string word2) {
    string ans;
    int pointer_t = 0;
    int n = word1.size();
    if (n < word2.size()) n = word2.size();
    while(pointer_t < n) {
        if(pointer_t < word1.size()) {ans += word1[pointer_t];}
        if(pointer_t < word2.size()) {ans += word2[pointer_t];}
        pointer_t++;
    }
    return ans;
}

int main() {
    string word1 = "ab";
    string word2 = "pqrs";
    string ans = mergeAlternately(word1, word2);
    cout << "THE ANSWER: " << ans << "\n";
    return 0;
}