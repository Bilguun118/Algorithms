#include <iostream>

using namespace std;

void find_R2(int R1, int S) {
    cout << (2*S) - R1;
}


int main(){
    int R1,S;
    cin >> R1 >> S;
    find_R2(R1,S);
    return 0;
}