#include<iostream>
#include<string>

using namespace std;

int main() {
    string inst;
    cin >> inst;
    // inst[i] == 43 -> +
    for(int i = 0; i < inst.size(); i++) {
        if(inst[i] >= 33 && inst[i] <= 126){
            if((inst[i] == 72 || inst[i] == 81) || inst[i] == '9') {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}