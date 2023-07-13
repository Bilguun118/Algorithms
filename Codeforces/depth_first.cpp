#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <map>

using namespace std;


int main() {
    stack<int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);
    while(!stack.empty()) {
        cout << stack.top() << " " << endl;
        stack.pop();
    }
    // Vector Section Goes here
    vector<vector<int>> arr;
    arr = {
        {1,2,3},
        {5,8,7}
    };
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << "VALUE: " << arr[i][j] << endl;
        }
    }

    // Map Data Structure in CPP
    map<string, string> mmap;
    mmap["testKey"] = "testValue";
    cout << mmap["testKey"] << endl;
    cout << "END" << endl;
    return 0;
} 