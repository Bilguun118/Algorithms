#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

void odd_echo(vector<string>words) {
    for(int i = 0; i < words.size(); i+=2) {
        cout << words[i] << " ";
    }
}

int main() {
    int TC;
    vector<string>words;
    cin >> TC;
    while(TC--) {
        string word;
        cin >> word;
        words.push_back(word);
    }
    odd_echo(words);
    return 0;
}