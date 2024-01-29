#include<iostream>
#include<map>
using namespace std;

int main() {
    int h,w,u1,d1,k;
    cin >> w >> h >> k;
    // vector<pair<int, int>>path;
    map<int, int> path;
    while(k--) {
        // d1- > height, u1 -> weight
        cin >> u1 >> d1;
        path[d1] = u1;
    }
    while(h) {
        w += h;
        w -= path[h];
        if (w < 0) w = 0;
        h--;
    }
    cout << w;
    return 0;
}  