#include <iostream>

using namespace std;

void get_fizzbuzz(int x, int y, int n) {
    for(int i = 1; i <= n; i++) {
        if(i % x == 0 && i % y == 0) {
            cout << "FizzBuzz" << "\n";
        } else if (i % x == 0){
            cout << "Fizz" << "\n";
        } else if (i % y == 0) {
            cout << "Buzz" << "\n";
        } else {
            cout << i << "\n";
        }
    }
    return;
}


int main() {
    int x,y,n;
    cin >> x >> y >> n;
    get_fizzbuzz(x,y,n);
    return 0;
}