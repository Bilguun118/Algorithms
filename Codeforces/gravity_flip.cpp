#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>boxes;
    while(n--) {
        int b;
        cin >> b;
        boxes.push_back(b);
    }
    sort(boxes.begin(), boxes.end());
    for(int i = 0; i < boxes.size(); i++) {
        if(i == 0) cout << boxes[i];
        else cout << " " << boxes[i];
    }
    return 0;
}