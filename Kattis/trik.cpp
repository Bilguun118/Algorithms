#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

int determine_trik(char cup, int ball) {
    if(ball == 1) {

    }
    return ball;
}

void trik(string cups) {
    int n = cups.size();
    int det[3] = {1,0,0};
    int ball = 1;
    for(int i = 0; i < n; i++) {
        ball = determine_trik(cups[i], ball);
        continue;
    }
    return;
}

int main() {
    string cups;
    cin >> cups;
    trik(cups);
    return 0;
}