#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int maxAreaBrute(vector<int>container) {
    // try out every possible combination
    int n = container.size();
    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            ans = max(ans, (j - i) * min(container[i],container[j]));
        }
    }
    return ans;
}

int maxAreaTwoPointer(vector<int>container) {
    // try to get two pointer close by chosing greedily
    int n = container.size();
    int left = 0, right = n - 1;
    int ans = 0;
    while(left < right) {
        ans = max(ans, (right - left) * min(container[left],container[right]));
        if(container[left] < container[right]) left++;
        else right--;
    }
    return ans;
}


int main() {
    vector<int>container = {1,8,6,2,5,4,8,3,7};
    int ans = maxAreaTwoPointer(container);
    cout << ans;
    return 0;
}