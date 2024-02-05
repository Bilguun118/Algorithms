#include<iostream>
#include<string>
#include<set>

using namespace std;

long substrCountBrute(int n, string s) {
    long ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            string substr;
            for(int k = i; k <= j; k++) {
                substr += s[k];
            }
            cout << substr << "\n";
            // from here we have to clarify substring meets two case
            int count_same = 0;
            set<char>check;
            for(int h = 0; h < substr.size(); h++) check.insert(substr[h]);
            if (check.size() == 1) {
                ans++; // valid substring
            }
            if (check.size() == 2) {
                // cout << "Need to check" << "\n";
                int first = 0;
                for(int z = 1; z < substr.size(); z++) {
                    // need to find middle element
                    if(substr[first] != substr[z] && (substr.size() / 2) == z) {
                        ans++;
                    }
                    first++;
                }
            }
        }
    }
    return ans;
}

int main() {
    long ans = substrCountBrute(7, "abcbaba");
    cout << ans;
    return 0;
}