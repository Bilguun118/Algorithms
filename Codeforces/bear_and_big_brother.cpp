#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int limak, bob, count_year;
    cin >> limak >> bob;

    while (limak <= bob) {
        limak = limak * 3;
        bob = bob * 2;
        count_year++;
    }
    cout << count_year << endl;
    return 0;
}