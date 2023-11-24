#include<iostream>

using namespace std;

#define ll long long


int main() {
    ll n;
    cin >> n;
    ll maxVal = 0;
    ll ans = 0;
    while(n--) {
        ll a;
        cin >> a;
        maxVal = max(maxVal, a);
        ans += maxVal - a;
    }
    cout << ans;
    return 0;
}