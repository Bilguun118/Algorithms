#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;

int main() {
    int N;
    // Number of rows in lawn
    cin >> N;
    int min = INT_MAX;
    while(N--) {
        int r;
        cin >> r;
        if(r < min) {
            min = r;
        }
    }
    cout << min+1 << "\n";
    return 0;
}