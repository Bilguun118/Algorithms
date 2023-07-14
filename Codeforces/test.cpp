#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main() {
    string a;
    cin >> a;
    int n = a.length();
    int k = 2;
    map<char, int>b;
    bool switcher;
    int counter = 0;
    for (int i = 0; i < n; i++) {
        b[a[i]]++;
    }
    // do conversion here
    for(auto j : b) {
        for(int i = 0; i < n; i++) {
            if (j.first == a[i] && j.second >= k) {
                if (j.second % k != 0) {
                    
                }
                cout << "THIS WORD SHOULD BE REMOVED: " << a[i] << endl;
                a[i] = '0';
            }
        }
    }
    cout << a << endl;
    return 0;
}