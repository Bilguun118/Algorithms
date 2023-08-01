#include <iostream>
#include <cstdlib>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int TC;
    cin >> TC;
    bool rotted_l, rotted_r;
    rotted_l = rotted_r = false;
    // cout << rotted_l << " " << rotted_r << "\n";
    int ans_right, ans_left;
    ans_right = ans_left = 8;
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
            if(teeth[0] == '-' || teeth[0] == '+') {
                ans_left--;
            } else {
                ans_right--;
            }
        }
    }
    if(ans_right > 0 && !rotted_r) {
        cout << 1;
    } else if (ans_left > 0 && !rotted_r) {
        cout << 0;
    } else {
        cout << 2;
    }
    return 0; 
}