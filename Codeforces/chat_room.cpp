#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int trackerconst, count=0;
    string constw = "hello";
    string word;
    cin >> word;
    for (int i = 0; i < word.length(); i++) {
        if (word[i] == constw[trackerconst]) {
            trackerconst++;
            count++;
        } 
    }
    if (count == 5) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}