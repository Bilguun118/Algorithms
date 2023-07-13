#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    // Init
    int G, S, count[5]={0};
    int capacity = 4;
    cin >> G;
    vector<int> nums(G);    
    while (G--) {
        cin >> S;
        count[S] += 1;
    }
    cout << "COUNT OF FIRST 1 NUMBER: " << count[1] << endl;
    int total = count[4] + count[3] + count[2] / 2;
    cout << total << endl;
    return 0;
}