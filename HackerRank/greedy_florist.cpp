#include<iostream>
#include<vector>

using namespace std;

int getMinimumCost(int k, vector<int> c) {
    int n = c.size();
    int ans = 0;
    if(n == k) {
        for(int i = 0; i < n; i++) ans++;
        return ans;
    }
    vector<int>people(k,0);
    for(int i = 0, k = 0; i < n; k++) {
        for(int j = 0; j < k && i < n; j++, i++) {
            people[j] += (k + 1) * c[i];
        }
    }
    for(int i = 0; i < k; i++) ans += people[i];
    return ans;
}

int main() {
    int k = 3;
    vector<int> c = {1, 3, 5, 7, 9}; 
    int ans = getMinimumCost(k,c);
    cout << ans;
    return 0;
}