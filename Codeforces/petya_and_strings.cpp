#include<iostream>

using namespace std;


// Petya and Strings CodeForces Submission
int main(){
    string first, second;
    for (int idx = 0; idx < first.size(); idx++){
        if (first[idx] >= 'A' && first[idx] <= 'Z') {
            first[idx] += 32;
        }
        if (second[idx] >= 'A' && second[idx] <= 'Z') {
            second[idx] += 32;
        }
        if (first < second) {
        cout << -1;
        } else if (first > second) {
            cout << 1;
        }
    }
    cout << 0;
    return 0;
}