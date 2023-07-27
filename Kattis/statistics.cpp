#include <iostream>
#include <limits.h>

using namespace std;

int main() {
    int N;
    for(int i = 1; cin >> N; i++) {
        long max = LONG_MIN;
        long min = LONG_MAX;
        for(int i = 0; i < N; i++) {
            long temp;
            cin >> temp;
            if(temp > max) {
                max = temp;
            }
            if (min > temp) {
                min = temp;
            }
        }
        cout << "Case "  << i << ": " << min << " " << max << " " << max-min << "\n";
    }
    
    return 0;
}