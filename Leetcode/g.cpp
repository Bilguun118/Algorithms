#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int neighbourR(vector<vector<int>>& a, int n, int i, int j){
    if (i >= n || j >= n) {
        return 0;
    }
    // if (i < 0 || i >= n || j < 0 || j >= n) {
    //     return a[i][j];
    // }
    int path_1 = a[i][j] * -1 + neighbourR(a, n, i+1, j);
    int path_2 = a[i][j] + neighbourR(a, n, i+1, j);
    int path_3 = a[i][j] * -1 + neighbourR(a, n, i, j + 1);
    int path_4 = a[i][j] + neighbourR(a, n, i, j + 1);
    return max({path_1,path_2,path_3,path_4});
}


void neighbour() {
    int n;
    cin >> n;
    vector<vector<int>>an;
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> an[i][j];
        }
    }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         // if (j+1 < n && an[i][j] * -1 + an[i][j+1] * -1 > an[i][j] + an[i][j+1]) {
    //         //     an[i][j] *= -1;
    //         //     an[i][j+1] *= -1;
    //         // }
    //         // if (i+1 < n && an[i][j] * -1 + an[i+1][j] * -1 > an[i+1][j] + an[i][j]) {
    //         //     an[i][j] *= -1;
    //         //     an[i+1][j] *= -1;
    //         // }
    //         an[i][j] = neighbourR(an, n, i, j);
    //     }
    // }
    int max_sum = neighbourR(an, n, 0, 0);
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << an[i][j];
        }
    }
    cout << max_sum << endl;
}


// int neighbourR(vector<vector<int>>a, int n, int i, int j){
//     if (i == n || j == n) {
//         return a[i][j];
//     }

//     if (i < 0 || i >= n || j < 0 || j >= n) {
//         return;
//     }

//     neighbourR(a, n, i-1, j);
//     neighbourR(a, n, i+1, j);
//     neighbourR(a, n, i, j-1);
//     neighbourR(a, n, i, j+1);
// }



int main() {
    int test;
    cin >> test;
    while(test--) {
        neighbour();
    }
    return 0;
}
