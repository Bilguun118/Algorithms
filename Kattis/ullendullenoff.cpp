#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<string> friends;
    cin >> n;
    while(n--) {
        string name;
        cin >> name;
        friends.push_back(name);
    }
    int mantracounter = 0;
    for(int i = 0; i < 12; i++) {
        // cout << friends[mantracounter];
        mantracounter++;
        if (mantracounter == friends.size()) {
            // reset the counter
            mantracounter = 0;
        }
    }
    cout << friends[mantracounter] << "\n";
    return 0;
}