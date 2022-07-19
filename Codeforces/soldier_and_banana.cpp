#include<iostream>

using namespace std;


// Soldier and Banana CodeForces Submission
int main(){
    int money, bananas, price, upprice;
    long long result = 0;
    cin >> price >> money >> bananas;
    for (int idx = 1; idx <= bananas; idx++) {
        result += idx * price; 
    }
    if (result <= money) {
        cout << 0 << endl;
    } else {
        cout << result - money << endl;
    }
    return 0;
}