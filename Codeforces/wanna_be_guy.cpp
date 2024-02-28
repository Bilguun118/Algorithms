#include<iostream>
#include<vector>

using namespace std;

void firstApproach(int n, int p) {
    vector<bool>ans(n, false);
    int q;
    while(p--) {
        int a;
        cin >> a;
        ans[a] = true;
    }
    cin >> q;
    while(q--) {
        int b;
        cin >> b;
        ans[b] = true;
    }
    // into one single array until (n)
    for(int i = 1; i <= ans.size(); i++) {
        if(!ans[i]) {
            cout << "Oh, my keyboard!" << "\n";
            return;
        }
    }
    cout << "I become the guy." << "\n";
}

void naiveApproach(int n, int p) {
    int q;
    vector<int>playerx(250);
    for(int i = 0; i < p; i++) {
        cin >> playerx[i];
    }
    cin >> q;
    for(int i = p; i < p+q; i++) {
        // from last position to until q (into one array)
        cin >> playerx[i];
    }
    int count = 0;
    sort(playerx.begin(), playerx.end());
    for(int i = 0; i < p+q; i++) {
        if(playerx[i] != playerx[i+1]) {
            count++;
        }
    }
    if(n == count) cout << "I become the guy" << "\n";
    else cout << "Oh, my keyboard!" << "\n";
    return;
}

int main() {
    int n,p;
    cin >> n >> p;
    firstApproach(n,p);
    return 0;
}