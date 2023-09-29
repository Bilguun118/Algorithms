#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;
    int ans = 0;
    for(int i = 0; i < word.size(); i++) {
        if (word[i] == 'u') {
            ans++;
        }
    }
    cout << ans;
    return 0;
}