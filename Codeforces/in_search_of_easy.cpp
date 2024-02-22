#include<iostream>
#include<string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string ans = "EASY";
    while(n--) {
        int e;
        cin >> e;
        if(e == 1) ans = "HARD";
    }
    cout << ans;
    return 0;
}