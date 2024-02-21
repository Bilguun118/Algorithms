#include<iostream>
#include<string>

using namespace std;

int main() {
    int n, t;
    string schoolQ;
    cin >> n >> t;
    cin >> schoolQ;
    int count = t;
    while(t--){
        for(int j = 0; j < n; j++) {
            if(schoolQ[j] == 'B' && schoolQ[j+1] == 'G' && j+1 < n) {
                char temp = schoolQ[j+1];
                schoolQ[j+1] = schoolQ[j];
                schoolQ[j] = temp;
                j = j+1;
            };
        }
    }
    cout << schoolQ;
    return 0;
}