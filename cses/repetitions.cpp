#include<iostream>
#include<string>
#include<queue>

using namespace std;

int main() {
    string n;
    queue<char>qt;
    cin >> n;
    int count = 0;
    int maxVal = 0;
    qt.push(n[0]);
    for(int i = 1; i < n.size(); i++) {
        if(qt.front() == n[i]) {
            count++;
        } else {
            count = 0;
        }
        maxVal = max(maxVal, count);
        qt.pop();
        qt.push(n[i]);
    }
    cout << maxVal+1;
    return 0;
}