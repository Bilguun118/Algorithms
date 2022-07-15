#include <iostream>

using namespace std;

// Next Round CodeForces Submission
int main(){
    int contestants, numof_scores, counter=0, temp;
    int scores[100];
    cin >> contestants >> numof_scores;
    for (int idx = 1; idx <= contestants; idx++) {
        cin >> temp;
        scores[idx] = temp;
    }
    for (int val = 1; val <= contestants; val++){
        if(scores[val] >= scores[numof_scores] && scores[val] > 0){
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}