#include<iostream>

using namespace std;

int faster(int n) {
    long long a;
    cin >> n;
    if(n % 2 == 0) a = n / 2;
    else a = ((n + 1) / 2) * (-1);
    cout << a << endl;
    return 0;
}

int main() {
    long n, ans = 0;
    cin >> n;
    long i = 1, keeper;
    while(i <= n) {
        if((i ^ 1) == i-1) keeper = -i;
        else keeper = i;
        ans += keeper;
        i++;
    }
    cout << ans;
    return 0;
}