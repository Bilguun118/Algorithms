#include<iostream>
#include<set>

using namespace std;

bool isDistinct(int year) {
    int count = 0;
    set<int>dupl;
    while(year > 0) {
        int digit = year % 10;
        count++;
        dupl.insert(digit);
        year /= 10;
    }
    if(dupl.size() == count) {
        return true;
    }
    return false;
}

int main() {
    int n, ans;
    cin >> n;
    ans = n;
    while(1) {
        ans += 1;
        if (isDistinct(ans) && ans > n) break;
    }
    cout << ans;
    return 0;
}