#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;
    int n = word.size() - 1;
    while(n >= 0) {
        cout << word[n];
        n--;
    }    
    return 0;
}