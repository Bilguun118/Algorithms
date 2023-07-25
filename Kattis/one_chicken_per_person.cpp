#include <iostream>

using namespace std;

int main() {
    // one chicken per person
    int N,M;
    cin >> N >> M;
    int diff = M-N;
    if(diff < 0) {
        if(diff == - 1) {
            printf("Dr. Chaz needs %d more piece of chicken!", N-M);    
        } else {
            printf("Dr. Chaz needs %d more pieces of chicken!", N-M);
        }
    } else {
        if(diff == 1) {
            printf("Dr. Chaz will have %d piece of chicken left over!", M-N);   
        } else {
            printf("Dr. Chaz will have %d pieces of chicken left over!", M-N);
        }
    }
    return 0;
}