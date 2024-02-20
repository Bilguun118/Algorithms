#include<iostream>

using namespace std;

int main() {
    int n, tram = 0, ans = 0;
    cin >> n;
    while(n--) {
        int a, b;
        cin >> a >> b;
        tram -= a;
        tram += b;
        ans = max(ans, tram);
    }
    cout << ans;
    return 0;
}