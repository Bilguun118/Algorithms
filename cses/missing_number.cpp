#include<iostream>
#include<algorithm>
#include<unordered_map>

using namespace std;

#define ll long long

int main() {
    ll N;
    cin >> N;
    ll m = N - 1;
    unordered_map<ll, bool>lookup;
    while(m--) {
        ll num;
        cin >> num;
        lookup[num] = true;
    }
    for(ll i = 1; i <= N; i++) {
        if(lookup.find(i) == lookup.end()) {
            cout << i << "\n";
            break;
        }
    }
    return 0;
}