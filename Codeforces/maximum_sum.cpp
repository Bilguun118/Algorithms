#include <iostream>
#include <algorithm>
#include <vector>
#include<numeric>

using namespace std;

int maximumSum(vector<int>a, int k) {
    int max = 0;
    vector<int> min;
    sort(a.begin(), a.end(), greater<>());
    vector<int> max_removed = a;
    if (k == 1) {
        max_removed[0] = 0;
        // Sum of Vector that has been Max Removed
        int sum_of_max_removed = accumulate(max_removed.begin(),max_removed.end(), 0);
        
        // Popping last 2 minimum elements and find sum 
        a.pop_back();
        a.pop_back();
        int sum_of_min_removed = accumulate(a.begin(),a.end(), 0);
        
        if (sum_of_min_removed > sum_of_max_removed) {
            return sum_of_min_removed;
        }
        return sum_of_max_removed;
    }
    
    return 1;
}


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,k,res;
        vector<int>a;
        cin >> n >> k;
        while(n--) {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        res = maximumSum(a, k);
        cout << res << endl;
    }
    return 0;
}