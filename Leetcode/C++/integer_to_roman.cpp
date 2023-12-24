#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main() {
    int num = 1994;
    unordered_map<int, char>symbols;
    string ans;
    symbols[1] = 'I';
    symbols[4] = 'IV';
    symbols[5] = 'V';
    symbols[10] = 'X';
    symbols[50] = 'L';
    symbols[100] = 'C';
    symbols[500] = 'D';
    symbols[1000] = 'M';

    return 0;
}