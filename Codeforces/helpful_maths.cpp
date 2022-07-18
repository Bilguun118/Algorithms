#include<iostream>
#include<algorithm>
using namespace std;


// Helpful Maths CodeForces Submission
int main(){
    string numbers;
    char arr[100];
    int index = 0;
    cin >> numbers;
    if (numbers.size() > 100) {
        cout << "Input is more than constraints" << endl;
        return 1;
    }
    for(int idx = 0; idx < numbers.size(); idx++) {
        if (numbers[idx] == '+') {
            continue;
        }
        arr[index] = numbers[idx];
        index++;
    }
    sort(arr, arr+index);
    for (int val = 0; val < index; val++) {
        if (val == index - 1) {
            cout << arr[val] << endl; 
        } else {
            cout << arr[val] << '+';
        }
    }
    return 0;
}