#include <iostream>

using namespace std;


int main() {
    double C;
    int L;
    cin >> C >> L;
    double total;
    while(L--) {
        double w,t;
        cin >> w >> t;
        total += t * w;
    }
    cout.precision(10);
    cout << fixed << total * C << "\n";
    return 0;
}#include <iostream>
#include <cmath>

using namespace std;