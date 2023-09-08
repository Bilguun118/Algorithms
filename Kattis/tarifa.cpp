#include <iostream>
#include <vector>

using namespace std;

int main() {
    int X,N;
    int ans = 0;
    cin >> X >> N;
    vector<int>keeper;
    while(N--) {
        int usage;
        cin >> usage;
        keeper.push_back(X - usage);
    }
    for(int i = 0; i < keeper.size(); i++) {
        ans += keeper[i];
    }
    ans+=X;
    cout << ans;
    return 0;
}