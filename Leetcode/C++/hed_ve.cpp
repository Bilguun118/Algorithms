#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void hedVe() {
    int n, x;
    int count = 0;
    cin >> n >> x;
    vector<int>a;
    vector<int>b;
    int tmp = n;
    while(n--) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    while(tmp--) {
        int temp_o;
        cin >> temp_o;
        b.push_back(temp_o);
    }
    sort(b.begin(), b.end(), greater<>());
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] + b[i] > x) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    int test_cases;
    cin >> test_cases;
    while(test_cases--) {
        hedVe();
    }
    return 0;
}