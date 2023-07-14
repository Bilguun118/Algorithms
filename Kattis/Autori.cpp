#include <iostream>
#include <string>

using namespace std;

void find_autori(string word) {
    int n = word.size();
    for(int i = 0; i < n; i++) {
        if(isupper(word[i])) {
            cout << word[i];
        }
    }
}

int main() {
    string word;
    cin >> word;
    find_autori(word);
    return 0;
}