#include<iostream>

using namespace std;


// Stones on table CodeForces Submission
int main(){
    int numofstones, counter = 0;
    string stones;
    cin >> numofstones >> stones;
    char entry = stones[0];
    for(int idx = 0; idx < stones.size(); idx++){
        if(stones[idx] == stones[idx++]) {
            counter++;
        }
        entry = stones[idx];
    }
    cout << counter << endl;
    return 0;
}