#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

int determine_trik(char cup, int ball) {
    if(cup == 'A') {
        if(ball == 1) {
            ball = 2;
        } else if (ball == 2) {
            ball = 1;
        } else {
            ball = 3;
        }
    } else if (cup == 'B') {
        if (ball == 1) {
            ball = 1;
        } else if (ball == 2) {
            ball = 3;
        } else {
            ball = 2;
        }
    } else {
        if (ball == 1) {
            ball = 3;
        } else if (ball == 2) {
            ball = 2;
        } else {
            ball = 1;
        }
    }
    return ball;
}

void trik(string cups) {
    int n = cups.size();
    int ball = 1;
    for(int i = 0; i < n; i++) {
        ball = determine_trik(cups[i], ball);
    }
    cout << ball;
    return;
}

int main() {
    string cups;
    cin >> cups;
    trik(cups);
    return 0;
}