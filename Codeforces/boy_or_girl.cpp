#include<iostream>
#include <algorithm> 

using namespace std;


// Boy Or Girl CodeForces Submission
int main(){
    string name;
    cin >> name;
    int arr[101] = {0};
    int counter = 0;
    for(int idx = 0; idx < name.size(); idx++){
        arr[idx] = arr[name[idx] - 'a'];
    //     if (arr[name[idx] - 'a'] == 0) {
    //         counter++;
    //         arr[name[idx] - 'a'] = 1;
    //     }
    }
    // if(!(counter % 2)){
    //     cout << "CHAT WITH HER!" << endl;
    // } else {
    //     cout << "IGNORE HIM!" << endl;
    // }
    cout << arr << endl;
    return 0;
}