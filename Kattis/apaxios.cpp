#include <iostream>
#include <string>

using namespace std;

void get_apaxios(string word) {
    int n = word.size();
    for(int i = 0; i < n; i++) {
        if(word[i] != word[i+1] && i < n) {
            cout << word[i];
        }
    }
}

int main() {
    string word;
    cin >> word;
    get_apaxios(word);
    return 0;
}