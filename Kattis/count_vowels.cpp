#include <iostream>
#include <string>

using namespace std;

int main() {
    int count = 0;
    while(1) {
        if(feof(stdin)) break;
        string word;
        cin >> word;
        for(int i = 0; i < word.size(); i++) {
            if (word[i] == 65 || word[i] == 69 || word[i] == 73 || word[i] == 79 || word[i] == 85) {
                count++;
            } else {
                int conv = word[i] - 32;
                if (conv == 65 || conv == 69 || conv == 73 || conv == 79 || conv == 85) count++;
            }
        }
    }
    cout << count;
    return 0;
}