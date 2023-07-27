#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    while(N--) {
        int g;
        cin >> g;
        vector<int>groups;
        for(int i = 0; i < g; i++) {
            int each_gnomes;
            cin >> each_gnomes;
            groups.push_back(each_gnomes);
        }
        for(int j = 0; j < groups.size(); j++) {
            if(j+1 <= groups.size() && (groups[j+1] - 1) != groups[j]) {
                cout << j+2 << "\n";
                break;
            }
        }
    }
    return 0;
}