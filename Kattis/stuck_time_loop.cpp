#include <iostream>

using namespace std;

void break_time_loop(int N){
    for(int i = 1; i <= N; i++){
        cout << i << " " << "Abracadabra" << "\n";
    }
}


int main(){
    int N;
    cin >> N;
    break_time_loop(N);
    return 0;
}