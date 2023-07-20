#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <stack>

using namespace std;

void do_homework(string problems) {
    int n = problems.size();
    vector<int>digits;
    stack<int>ranges;
    for(int i = 0; i < n; i++) {
        // J is to keep track of nested loop
        cout << "THE I: " << i << endl;
        int j = i;
        string number;
        bool do_insert = false;
        while(problems[j] >= '0' && problems[j] <= '9' && j < problems.size()) {
            number += problems[j];
            do_insert = true;
            j++;
        }
        if(do_insert) {
            digits.push_back(stoi(number));
        }
        if(problems[i-1] == '-') {
            cout << "PUSHING BACK BOTTOM: " << stoi(number) << endl;
            ranges.push(stoi(number));
        } else if (problems[i] == '-') {
            cout << "PUSHIN BACK TO TOP: " << digits.back() << endl;
            ranges.push(digits.back());
        }
    }
    for(int i = 0; i < digits.size(); i++) {
        cout << "CONVERTED TO: " << digits[i] << "\n";
    }
    while(!ranges.empty()) {
        cout << ranges.top() << endl;
        ranges.pop();
    }
    return;
}

int main() {
    string problems;
    cin >> problems;
    do_homework(problems);
    return 0;
}