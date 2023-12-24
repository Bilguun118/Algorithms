#include<iostream>
#include<unordered_map>

using namespace std;

int main() {
    unordered_map<char, int>symbols;
    string s = "MCMXCIV";
    int ans = 0;
    symbols['I'] = 1;
    symbols['V'] = 5;
    symbols['X'] = 10;
    symbols['L'] = 50;
    symbols['C'] = 100;
    symbols['D'] = 500;
    symbols['M'] = 1000;
    // cm - 900, cd - 500
    // xl - 40, xc - 90
    // iv - 4, ix - 9
    for(int i = s.size()-1; i >= 0; i--) {
        int current_number = symbols[s[i]];
        if(4 * current_number < ans) ans -= current_number;
        else ans += current_number;
    }
    cout << ans;
    return 0;
}