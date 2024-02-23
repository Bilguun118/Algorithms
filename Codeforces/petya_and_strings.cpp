#include<iostream>

using namespace std;


// Petya and Strings CodeForces Submission
int main(){
    string first, second;
    cin >> first >> second;
    for(int i = 0; i < first.size(); i++) {
        char firstChr = toupper(first[i]);
        char secondChr = toupper(second[i]);
        if(firstChr < secondChr) {cout << -1; return 0;}
        if(firstChr > secondChr) {cout << 1; return 0;}
    }
    cout << 0;
    return 0;
}