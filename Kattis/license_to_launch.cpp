#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

void find_launch_day(vector<int>& days) {
    int launch_day = INT_MAX;
    int keeper = 0;
    int n = days.size();
    for(int i = 0; i < n; i++) {
        if(launch_day > days[i]) {
            launch_day = days[i];
            keeper = i;
        }
    }
    cout << keeper << "\n";
    return;
}


int main() {
    int N;
    cin >> N;
    vector<int>days;
    while(N--) {
        int day;
        cin >> day;
        days.push_back(day);
    }
    find_launch_day(days);
    return 0;
}