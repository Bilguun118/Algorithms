#include <iostream>

using namespace std;

void find_switch_points(int n){
    double r1 = 100 / double(n);
    double r2 = 100 / (100 - double(n));
    printf("%lf\n", r1);
    printf("%lf\n", r2);
    return;
}


int main() {
    int N;
    cin >> N;
    find_switch_points(N);
    return 0;
}