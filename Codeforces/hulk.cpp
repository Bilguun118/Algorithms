#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    string ans;
    cin >> n;
    int i = 0;
    while(i < n) {
        if((i^1) == i + 1) {
            if((n - i) > 1) {
                ans += "I hate that";
            } else {
                ans += "I hate it";
            }
        } else {
            if((n - i) > 1) {
                ans += "I love that";
            } else {
                ans += "I love it";
            }
        }
        if(i != n-1) ans += ' ';
        i++;
    }
    cout << ans;
    return 0;
}