#include <iostream>

using namespace std;

// Way too long word CodeForces Submission
int main() {
    int entry;
    string words;
    cin >> entry;
    for (int idx = 0; idx < entry; idx++) {
        cin >> words;
        if(words.size() > 10) {
            cout << words[0] << words.size() - 2 << words[words.size()-1] << endl;
        } else {
            cout << words << endl;
        }
    } 
    return 0;
}