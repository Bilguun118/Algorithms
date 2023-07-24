#include <iostream>
#include <vector>
#include <string>

using namespace std;

void find_cpr_num(string cpr_number) {
    int total = 0;
    vector<int>temp = {
        4,3,2,7,6,5,4,3,2,1
    };
    bool shift = false;
    for(int i = 0; i < 11; i++) {
        if (cpr_number[i] == '-') {
            shift = true;
            continue;
        }
        if(cpr_number[i] >= '0' && cpr_number[i] <= '9') {
            if (!shift) {
                total += int(cpr_number[i] - '0') * temp[i];
            } else {
                total += int(cpr_number[i] - '0') * temp[i-1];
            }
        }
    }
    if(total%11 == 0) {
        cout << 1;
    } else {
        cout << 0;
    }
    return;
}

int main() {
    string cpr_number;
    cin >> cpr_number;
    find_cpr_num(cpr_number);
    return 0;
}