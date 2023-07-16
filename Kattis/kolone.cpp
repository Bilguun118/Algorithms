#include <iostream>
#include <string>
#include <vector>
using namespace std;

void jump_over(int N1, int N2, string row1, string row2, int T)  {
    vector<char>sv(N1+N2);
    if(T == 0) {
        cout << row1 << row2;
    }

    while(T--) {
        for(int i = 0; i < row1.size(); i++) {
            // jump over each other T seconds
            
        }
        for(int i = 0; i < row2.size(); i++) {
            // jump over each other T seconds
        }
    }
    return;
}

int main() {
    int N1, N2, T;
    string row1, row2;
    cin >> N1 >> N2;
    cin >> row1 >> row2;
    cin >> T;
    return 0;
}