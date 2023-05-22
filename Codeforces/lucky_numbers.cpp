#include <iostream>

using namespace std;

// Bit++ CodeForces Submission
int main(){
    long long lucky_number;
    int count;
    cin >> lucky_number;
    while (lucky_number > 0) {
        int lst_num = lucky_number % 10;
        if (lst_num == 4 || lst_num == 7) {
            count++;
        }
        lucky_number = lucky_number / 10;
    }
    if (count == 4 || count == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}