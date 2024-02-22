#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[12]={4,7,47,74,44,444,447,474,477,777,774,744};
    int almostlucky = 0;
    for(int i = 0; i < 12; i++) {
        if(n % arr[i] == 0) almostlucky++;
    }
    if (almostlucky > 0) cout << "YES";
    else cout << "NO";
    return 0;
}