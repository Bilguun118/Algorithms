#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>

using namespace std;

int compress(vector<char>& chars) {
    int n = chars.size();
    if(n == 1) {
        return 1;
    }
    int i = 0, chidx = 0;
    while(i < n) {
        int count = 1;
        int next_p = i+1;
        // loop until there is not consecutive element occurs (update with next pointer)
        while(next_p < n && chars[i] == chars[next_p]) {count++; next_p++;}
        if(count > 1) { // found consecutive repeating chars
            chars[chidx] = chars[i]; chidx++;
            string cv = to_string(count);
            for (char ch: cv) {
                chars[chidx] = ch;
                chidx++;
            }
            i = next_p;
        } else {
            chars[chidx] = chars[i]; chidx++;
            i++;
        }
    }
    return chidx;
}

int main() {
    vector<char>chars = {'a','a','b','b','c','c','c'};
    int ans = compress(chars);
    cout << ans;
    return 0;
}