#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<long long>a(5);
    int n = 4, ans = 0;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++) {
        if(i+1 < 5 && a[i] == a[i+1]) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}