#include<iostream>

using namespace std;

int main() {
    int n,ans=0;
    int distskill[] = {5,4,3,2,1};
    cin >> n;
    for(int i = 0; i < 5; i++) {
        ans += n / distskill[i];
        n = n % distskill[i];
    }
    cout << ans;
    return 0;
}