#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    string game;
    while (n--) {
        char s;
        cin >> s;
        game.push_back(s);
    }
    
    int a = 0;
    int d = 0;
    for (int i = 0; i < game.length(); i++) {
        if(game[i] == 'A') {
            a++;
        } else {
            d++;
        }
    }

    if(a > d) {
        cout << "Anton";
    } else if (a == d) {
        cout << "Friendship";
    } else {
        cout << "Danik";
    }
    return 0;
}