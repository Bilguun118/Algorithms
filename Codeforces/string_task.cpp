#include<iostream>
#include<string>

using namespace std;


// String Task CodeForces Submission
int main(){
    string vowels, result;
    cin >> vowels;
    for(int idx = 0; idx < vowels.size(); idx++){
        switch (vowels[idx]) {
            case 'a':
            case 'A':
                continue;
            case 'o':
            case 'O':
                continue;
            case 'y':
            case 'Y':
                continue;
            case 'e':
            case 'E':
                continue;
            case 'u':
            case 'U':
                continue;
            case 'i':
            case 'I':
                continue;
        }
        result += '.';
        result += tolower(vowels[idx]);
    }
    cout << result << endl;
    return 0;
}