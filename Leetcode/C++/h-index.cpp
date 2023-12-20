#include<iostream>
#include<vector>

using namespace std;

int findHindex(vector<int>& citations) {
    int cit = citations.size();
    int hindex = 0;
    sort(citations.begin(), citations.end());
    for(int i = 0; i < cit; i++) {
        if(citations[i] >= cit - i) hindex = max(hindex, cit-i);
    }
    return hindex;
}

int main() {
    vector<int> citations = {3,0,6,1,5};
    int ans = findHindex(citations);
    cout << ans;
    return 0;
}