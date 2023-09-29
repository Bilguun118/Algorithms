#include <iostream>
#include <string>

using namespace std;

int main() {
    string dna;
    cin >> dna;
    for(int i = 0; i < dna.size(); i++) {
        if(dna[i] == 'C' && dna[i+1] == 'O' && dna[i+2] == 'V') {
            cout << "Veikur!";
            return 0;
        }
    }
    cout << "Ekki veikur!";
    return 0;
}