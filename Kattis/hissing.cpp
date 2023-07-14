#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;
    int count = 0;
    for(int i = 0; i < word.size(); i++) {
        if(word[i] == 's' && word[i+1] == 's' && i < word.size()) {
            count++;
        }
    }
    if (count > 0) {
        cout << "hiss";
    } else {
        cout << "no hiss";
    }
    return 0;
}