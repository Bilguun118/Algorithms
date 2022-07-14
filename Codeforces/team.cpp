#include <iostream>

using namespace std;

// Team CodeForces Submission
int main(){
    int entry,p1,p2,p3,counter;
    cin >> entry;
    for (int idx = 0; idx < entry; idx++) {
        cin >> p1 >> p2 >> p3;
        if (p1+p2+p3 >= 2){
            counter += 1;
        }
    }
    cout << counter << endl;
    return 0;
}