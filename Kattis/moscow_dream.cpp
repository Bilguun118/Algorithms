#include <iostream>

using namespace std;

int main() {
    int a,b,c,N;
    cin >> a >> b >> c >> N;
    if(a <= 0 || b <= 0 || c <= 0) {
        cout << "NO";
    } else {
        if (a+b+c >= N && N >= 3) {
            cout << "YES";
            return 0;
        }
        cout << "NO";
    }
}