#include <iostream>

using namespace std;

// Bit++ CodeForces Submission
int main(){
    int numofoper, counter=0;
    string x;
    cin >> numofoper;
    for (int idx = 0; idx < numofoper; idx++){
        cin >> x;
        if (x == "++X" || x == "X++"){
            counter++;
        } else if (x == "--X" || x == "X--") {
            counter--;
        }
    }
    cout << counter << endl;
    return 0;
}