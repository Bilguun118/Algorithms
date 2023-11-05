#include<iostream>
#include<string>

using namespace std;

int main() {
    int W,R;
    cin >> W >> R;
    while(R--) {
        string K;
        int WMax;
        cin >> K >> WMax;
        if(W > WMax) {
            cout << K << " " << "lokud\n";
        } else {
            cout << K << " " << "opin\n";
        }
    }
    return 0;
}