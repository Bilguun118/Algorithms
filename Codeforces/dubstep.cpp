#include<iostream>
#include<string>

using namespace std;

int main() {
    string n;
    cin >> n;
    for(int i = 2; i < n.size();) {
        if(n[i-2] != 'W' && n[i-1] != 'U' && n[i] != 'B') {
            cout << n[i-2] << n[i-1] << n[i] << "\n";
        } else {
            cout << "this is dubstep-> " << i << "\n";
            i += 3;
        }
    }
    return 0;
}