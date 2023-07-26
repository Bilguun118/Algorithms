#include <iostream>
#include <string>

using namespace std;

void help_phd(string oper) {
    int n = oper.size();
    bool secondary = false;
    string first;
    string second;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(oper[i] == 'P') {
            cout << "skipped" << "\n";
            return;
        }
        if(oper[i] >= '0' && oper[i] <= '9') {
            if(!secondary) {
                first += oper[i];
            } else {
                second += oper[i];
            }
        } 
        if (oper[i] == '+') {
            secondary = true;
        }
    }
    ans = stoi(first) + stoi(second);
    cout << ans << "\n";
    return;
}

int main() {
    int N;
    cin >> N;
    while(N--) {
        string oper;
        cin >> oper;
        help_phd(oper);
    }
    return 0;
}