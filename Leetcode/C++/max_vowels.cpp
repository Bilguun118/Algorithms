#include<iostream>
#include<string>

using namespace std;

bool isVowel(char chr) {
    return (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'u' || chr == 'o');
}

int maxVowels(string word, int k) {
    int ans = 0;
    int n = word.size();
    int count = 0;
    for(int i = 0; i < k; i++) {
        char currentChr = tolower(word[i]);
        if(isVowel(currentChr)) {count++;}
    }
    int running_sum = count;
    for(int i = k; i < n; i++) {
        // for rest of window (we exclude the consecutive substring by one)
        char currentRunChr = tolower(word[i]);
        char prevChrWindow = tolower(word[i-k]); // points to previous element need to be excluded from current running substring
        if(n - k > 1){
            if(isVowel(prevChrWindow)) running_sum--;
        }
        if(isVowel(currentRunChr)) running_sum++;
        ans = max(ans, running_sum);
    }
    if(ans < count) return count;
    return ans;
}

int main() {
    int ans = maxVowels("ovkrzjmplhcloojfjrccmrscwqqhaackfyorqpzekrzvpynqpmgkqd", 48);
    cout << ans;
    return 0;
}