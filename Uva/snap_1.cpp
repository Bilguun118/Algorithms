#include <iostream>
#include <cstdlib>
#include <stack>
#include <deque>
#include <vector>
#include <string>

using namespace std;
void snap() {
    string jane,  john;
    cin >> jane >> john;
    
    stack<char>jane_down_pile;
    stack<char>john_down_pile;

    deque<char>jane_up_pile;
    deque<char>john_up_pile;

    for(int i = jane.size() - 1; i >= 0; i--) {
        jane_down_pile.push(jane[i]);
        john_down_pile.push(john[i]);
    }

    while(1) {
        char jast_top = jane_down_pile.top(); jane_down_pile.pop(); jane_up_pile.push_front(jast_top);
        char jost_top = john_down_pile.top(); john_down_pile.pop(); john_up_pile.push_front(jost_top);
        
        // Check Snap
        if (jast_top == jost_top) {
            if ((rand() / 141) % 2 == 0) {  // Jane Snap
                for(int i = john_up_pile.size()-1; i >= 0; i--){
                    jane_up_pile.push_front(john_up_pile[i]);
                }
                john_up_pile.clear();
                cout << "Snap! for Jane: ";
                for(int i = 0; i < jane_up_pile.size(); i++) {
                    cout << jane_up_pile[i];
                }
            } else {  // John Snap
                for(int i = jane_up_pile.size()-1; i >= 0; i--){
                    john_up_pile.push_front(jane_up_pile[i]);
                }
                jane_up_pile.clear();
                cout << "Snap! for John: ";
                for(int i = 0; i < john_up_pile.size(); i++) {
                    cout << john_up_pile[i];
                }
            }
            cout << endl;
        }

        if(jane_up_pile.size() && jane_down_pile.empty()) {
            for(int i = 0; i < jane_up_pile.size(); i++) {
                jane_down_pile.push(jane_up_pile[i]);
            }
            jane_up_pile.clear();
        } else if (john_up_pile.size() && john_down_pile.empty()) {
            for(int i = 0; i < john_up_pile.size(); i++) {
                john_down_pile.push(john_up_pile[i]);
            }
            john_up_pile.clear();
        }

        if(jane_up_pile.size() == 0 && jane_down_pile.empty()) {
            cout << "John wins.";
            return;
        } else if (john_up_pile.size() == 0 && john_down_pile.empty()) {
            cout << "Jane wins.";
            return;
        }
    }
}


void snap_v2() {
    string jane, john; cin >> jane >> john;
    stack<char> jane_down_pile, john_down_pile;
    deque<char> jane_up_pile, john_up_pile;
    
    for(int i = jane.size() - 1; i >= 0; i--) jane_down_pile.push(jane[i]);
    for(int i = john.size() - 1; i >= 0; i--) john_down_pile.push(john[i]);

    int plays = 0;
    while(++plays <= 1000) {
        printf("Plays: %d\n", plays);
        char john_top = john_down_pile.top(); john_down_pile.pop(); john_up_pile.push_front(john_top);
        char jane_top = jane_down_pile.top(); jane_down_pile.pop(); jane_up_pile.push_front(jane_top);

        if (jane_top == john_top) {
            if ((rand() / 141) % 2 == 0) {  // Jane Snap!
                for (int i = john_up_pile.size() - 1; i >= 0; i--) jane_up_pile.push_front(john_up_pile[i]); john_up_pile.clear();
                printf("Snap! for Jane: ");
                for (int i = 0; i < jane_up_pile.size(); i++) printf("%c", jane_up_pile[i]);
            } else {  // John Snap!
                for (int i = jane_up_pile.size() - 1; i >= 0; i--) john_up_pile.push_front(jane_up_pile[i]); jane_up_pile.clear();
                printf("Snap! for John: ");
                for (int i = 0; i < john_up_pile.size(); i++) printf("%c", john_up_pile[i]);
            }
            printf("\n");
        }

        if (!jane_up_pile.empty() && jane_down_pile.empty()) {
            for (int i = 0; i < jane_up_pile.size(); i++) jane_down_pile.push(jane_up_pile[i]);
            jane_up_pile.clear();
        }
        if (!john_up_pile.empty() && john_down_pile.empty()) {
            for (int i = 0; i < john_up_pile.size(); i++) john_down_pile.push(john_up_pile[i]);
            john_up_pile.clear();
        }

        if (jane_up_pile.empty() && jane_down_pile.empty()) {
            printf("John wins.");
            return;
        }
        if (jane_up_pile.empty() && jane_down_pile.empty()) {
            printf("Jane wins.");
            return;
        }
    }
}

int main() {
    int TC;
    cin >> TC;
    while(TC--) {
        snap_v2();
    }
    return 0;
}