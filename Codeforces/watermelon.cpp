#include <iostream>

using namespace std;

// WaterMelon CodeForces Submission
int main(){
    int weight;
    cin >> weight;
    if (weight % 2 == 0 && weight != 2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}