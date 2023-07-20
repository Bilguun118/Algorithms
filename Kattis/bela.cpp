#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<char, int> dominant = {
        {'A', 11},
        {'K', 4},
        {'Q', 3},
        {'J', 20},
        {'T', 10},
        {'9', 14},
    };
    int N;
    char chr_dom;
    cin >> N >> chr_dom;
    N *= 4;
    int ans = 0;
    while(N--) {
        string cards;
        cin >> cards;
        if(cards[1] == chr_dom) {
            if(cards[0] != '8' && cards[0] != '7') {
                ans += dominant[cards[0]];
            }
        } else {
            if(cards[0] == 'J') {
                ans += 2;
            } else if(cards[0] == '9' || cards[0] == '8' || cards[0] == '7') {
                continue;
            } else {
                ans += dominant[cards[0]];
            }
        }
    }
    cout << ans;
    return 0;
}

