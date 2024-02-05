#include<iostream>
#include<cmath>

using namespace std;


int squaresSlow(int a, int b) {
    int ans = 0;
    for(int i = a; i <= b; i++) {
        long long sqr = sqrt(i);
        if(sqr * sqr == i) ans++;
    }
    return ans;
}

int squaresFast(int a, int b) {
    int ans = 0;
    int limit1 = ceil(sqrt(a));
    int limit2 = floor(sqrt(b));
    if(limit1 <= limit2) {
        ans = limit2 - limit1 + 1;
    }
    return ans;
}

int main(){
    int a = 24;
    int b = 49;
    int ans = squaresSlow(a,b);
    cout << ans;
    return 0;
}