#include<iostream>
#include<vector>

using namespace std;

int main() {
    int e, f, c;
    int ans = 0;
    // e -> empty has -> at the start of the day
    // f -> empty found -> entire day
    // c -> required -> now required
    cin >> e >> f >> c;
    e += f;
    while(e >= c) {
        int temp = e;
        e /= c;
        ans += e;
        e += temp % c;
    }
    cout << ans;
    return 0;
}