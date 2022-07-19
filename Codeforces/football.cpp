#include<iostream>

using namespace std;


// Football CodeForces Submission
int main(){
    string ground;
    cin >> ground;
    string result = "NO";
    int oneCount = 0, twoCount = 0;
    for(int idx = 0; idx < ground.size(); idx++){
        if (ground[idx] == '0') {
            twoCount = 0;
            oneCount++;
        } else if(ground[idx] == '1'){
            oneCount = 0;
            twoCount++;
        }
        if (oneCount >= 7 || twoCount >= 7) {
            result = "YES";
            break;
        }
    }
    cout << result << endl;
    return 0;
}