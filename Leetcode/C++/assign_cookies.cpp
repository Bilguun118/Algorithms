#include<iostream>
#include<vector>

using namespace std;


int assignCookies(vector<int>& g, vector<int>& s) {
    if(s.size() == 0 || g.size() == 0) return 0;
    int ans = 0;
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    
    int child = 0;
    int cookie = 0;
    while(child < g.size() && cookie < s.size()) {
        if(g[child] > s[cookie]) cookie++;
        else if(g[child] <= s[cookie]) {
            ans++;
            child++;
            cookie++;
        }
    }
    return ans;
}

int main() {
    vector<int> g = {10,9,8,7};
    vector<int> s = {5,6,7,8};
    int res = assignCookies(g,s);
    return 0;
}