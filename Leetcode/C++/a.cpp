#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int>container(m, k);
    vector<int>indexes;
    for (int i = 0; i < m; i++) { indexes.push_back(i); }

    int unluckies = 0;
    while(n > 0 && indexes.size() > 0) {
        n--;
        int row;
        cin >> row;     row--;

        int low = 0;
        int high = indexes.size() - 1;
        int target = -1;

        while(low <= high) {
            int mid = low + (high - low) / 2;
            if (indexes[mid] == row) {
                target = indexes[mid]; break;
            }
            if (indexes[mid] > row) { 
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        if (target == -1) {
            if (low < indexes.size()) {
                target = indexes[low];
            } else {
                target = indexes[0];
            }
        }
        
        if (target != row) {
            unluckies++;
        }
        container[target]--;
        if (container[target] <= 0) {
            auto it = find(indexes.begin(), indexes.end(), target);
            if(it != indexes.end()) indexes.erase(it);
        }
    }
    // cout << "N: " << n << endl;
    unluckies += n;
    cout << unluckies;
    return 0;
}
