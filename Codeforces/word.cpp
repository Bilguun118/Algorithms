#include <iostream>
#include <algorithm>

using namespace std;

struct pp {
    string word;
    int freqUp;
    int freqLw; 
};


int main() {
    pp pne;
    pne.freqUp = 0;
    pne.freqLw = 0;

    cin >> pne.word;
    for (int i = 0; i < pne.word.length(); i++) {
        if (isupper(pne.word[i])) {
            pne.freqUp++;
        } else {
            pne.freqLw++;
        }
    }
    for (int i = 0; i < pne.word.length(); i++) {
        if (pne.freqUp < pne.freqLw) {
            pne.word[i] = towlower(pne.word[i]);
        } else if (pne.freqUp == pne.freqLw) {
            pne.word[i] = tolower(pne.word[i]);
        } else {
            pne.word[i] = toupper(pne.word[i]);
        }
    }
    cout << pne.word;
    return 0;
}
