#include <iostream>
#include <math.h>
using namespace std;

// Beautiful matrix CodeForces Submission
int main(){
    int row, columns, value;
    for (int row = 1; row <= 5; row++){
        for (int columns = 1; columns <= 5; columns++){
            cin >> value;
            if (value == 1) {
                cout << abs(row - 3) + abs(columns - 3) << endl;
            }
        }
    }
    return 0;
}