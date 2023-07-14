#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    string ans;
    cin >> word;
    word.erase(0, 1);
    word.erase(word.size()-1);
    int e_len = word.size() * 2;
    ans.push_back('h');
    for(int i = 0; i < e_len; i++) {
        ans.push_back('e');
    }
    ans.push_back('y');
    cout << ans << endl;
    return 0;
}