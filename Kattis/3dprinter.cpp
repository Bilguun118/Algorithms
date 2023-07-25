#include <iostream>

using namespace std;

int main()  {
    int N;
    cin >> N;
    int printer = 1;
    int printed = 0;
    int ans = 0;
    while(N > printed) {
        if((N-printed) > printer) {
            ans++;
            printer+=printer;
        } else {
            ans++;
            printed+=printer;
        }
    }
    cout << ans;
    return 0;
}