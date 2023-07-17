#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;
    bool reveal = false;
    for(int i = 0; i < word.size(); i++) {
        if (reveal) {
            cout << word[i];
            continue;
        }
        if(word[i] == 'A' || word[i] == 'a') {
            cout << word[i];
            reveal = true;
        }
    }
    return 0;
}