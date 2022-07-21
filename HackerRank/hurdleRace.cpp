#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int hurdleRace(int k, vector<int> height) {
    int result = 0;
    for(int idx = 0; idx < height.size(); idx++){
        if(height[idx] > k && result < height[idx] - k){
            result = height[idx] - k;
        }
    }
    return result;
}

int main(){
    int n, k;
    cin >> n;
    cin >> k;
    vector<int> height;
    for (int i = 0; i < n; i++) {
        int height_item;
        cin >> height_item;
        height[i] = height_item;
    }

    int result = hurdleRace(k, height);

    cout << result << "\n";

    return 0;
}