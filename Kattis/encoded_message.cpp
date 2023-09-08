#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    while(N--) {
        string encoded_word, ans;
        cin >> encoded_word;
        int chunk = int(sqrt(encoded_word.size()));
        int tracker = 0;
        for(int i = chunk - 1; i >= 0; i--) {
            for(int j = i; j < encoded_word.size(); j+=chunk) {
                ans+=encoded_word[j];
            }
        }
        cout << ans << "\n";
    }

    return 0;
}