#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <queue>

using namespace std;

int main() {
    int n;
    int counter = 0;
    int min = std::numeric_limits<int>::max();
    int max = 0;
    vector<int> a; 
    cin >> n;
    while(n--) {
        int temp;
        cin >> temp;
        a.push_back(temp);
        if (temp > max) {
            max = temp;
        }
        if(temp < min) {
            min = temp;
        }
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] < max && a[i] > min) {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}