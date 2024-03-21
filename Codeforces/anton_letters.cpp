#include<iostream>
#include<set>

using namespace std;

int main() {
    set<char>ans;
    char l;
    while(scanf("%c", &l) != EOF) {
        if((l >= 65 && l <= 90) || (l >= 97 && l <= 122)) ans.insert(l);
    }
    cout << ans.size();
    return 0;
}