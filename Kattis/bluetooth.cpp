#include <iostream>
#include <string>

using namespace std;

int main() {
    int TC;
    cin >> TC;
    bool rotted_l, rotted_r;
    rotted_l = rotted_r = false;
    int ans_right_lower, ans_left_lower, ans_right_upper, ans_left_upper;
    ans_right_lower = ans_left_lower = ans_right_upper = ans_left_upper = 8;
    while(TC--){
        string teeth;
        char state;
        cin >> teeth >> state;
        if (state == 'b') {
            // find out which side of teeth
            if(teeth[0] == '-' || teeth[0] == '+') {
                rotted_l = true;
            } else {
                rotted_r = true;
            }
        }
        if (state == 'm') {
            // we should not count this teeth
            if(teeth[0] == '-') {
                ans_left_lower--;
            } else if (teeth[0] == '+') {
                ans_left_upper--;
            } else if (teeth.back() == '-') {
                ans_right_lower--;
            } else {
                ans_right_upper--;
            }
        }
    }
    int left_tooth = ans_left_lower+ans_left_upper;
    int right_tooth = ans_right_lower+ans_right_upper;

    if(right_tooth > 0 && (ans_right_lower > 0 && ans_right_upper > 0) && !rotted_r) {
        cout << 1;
    } else if (left_tooth > 0 && (ans_left_lower > 0 && ans_left_upper > 0) && !rotted_l) {
        cout << 0;
    } else {
        cout << 2;
    }
    return 0;
}