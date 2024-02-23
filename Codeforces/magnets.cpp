#include<iostream>
#include<string>
#include<vector>

using namespace std;


int main() {
    int n, ans = 0;
    cin >> n;
    vector<string>mag;
    while(n--) {
        string magnet;
        cin >> magnet;
        mag.push_back(magnet);
    }
    string initial = mag[0];
    for(int i = 1; i < mag.size(); i++) {
        if(initial != mag[i]) {
            ans++;
        }
        initial = mag[i];
    }
    cout << ans+1;
    return 0;
}