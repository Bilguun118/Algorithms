#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;

void game_card() {
    // get the first 25 cards 
    // card face is shown number from 2 to 9 -> orginally value
    // otherwise it's 10
    for(int i = 0; i < 52; i++) {
        string card;
        cin >> card;
        // determine value here
        cout << "INPUT CARD IS: " << card << endl;
        cout << "The first value is: " << card[0] << endl;
    }
    return;
}


int main() {
    int TC; 
    int counter = 0;
    cin >> TC;
    while(TC--) {
        counter++;
        vector<string> card27, card25;
        for (int i = 0; i < 27; i++) { string card; cin >> card; card27.push_back(card);}
        for (int i = 0; i < 25; i++) { string card; cin >> card; card25.push_back(card);}
        int y = 0, x, pos;
        int selected_card_pos = 26;
        for (int i = 0; i < 3; i++) {
            x = (card27[selected_card_pos][0] >= '2' && card27[selected_card_pos][0] <= '9') ? card27[selected_card_pos][0] - '0' : 10;
            selected_card_pos -= 10 - x + 1;
            // cout << x << " " << selected_card_pos << endl;
            y += x;
        }
        // cout << y << endl;
        y--;
        // cout << y << endl;
        if (y <= selected_card_pos) {
            cout << "Case " << counter << ": " << card27[y] << endl;
            // printf("Case %d: %cc\n", counter, card27[y]);
        } else {
            y -= selected_card_pos;
            cout << "Case " << counter << ": " << card25[y-1] << endl;
            // printf("Case %d: %cc\n", counter, card25[y-1]);
        }
    }
    return 0;
}