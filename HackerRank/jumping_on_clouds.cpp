#include<iostream>
#include<vector>

using namespace std;

int jumpingOnClouds(vector<int> c, int k) {
    int ans = 100;
    int n = c.size();
    for(int i = 0; i < n;) {
        int jump = (i + k) % n;
        i = jump;
        cout << jump << "\n";
        if(c[i] == 1) ans -= 3;
        else ans -= 1;
        if (i == 0) {
            break;
        }
    }
    return ans;
}


int main() {
    vector<int>c = {0, 0, 1, 0};
    int k = 2;
    int ans = jumpingOnClouds(c, k);
    cout << ans;
    return 0;
}