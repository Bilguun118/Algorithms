#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int>digits;
    int number = 1789;
    while(number > 0) {
        int digit = number % 10;
        digits.push_back(digit);
        number /= 10;
    }
    for(int i = 0; i < digits.size(); i++) {
        cout << digits[i] << "\n";
    }
    return 0;
}