#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int counter = 0;
    while(n--) {
        int temp;
        cin >> temp;
        int original_out = temp / 10;
        int p_num = temp % 10;
        counter += pow(original_out, p_num);
    }
    cout << counter;
    return 0;
}