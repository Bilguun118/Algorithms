#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    int TC;
    cin >> TC;
    while(TC--) {
        int C;
        cin >> C;
        unordered_map<string, bool>visited;
        while(C--) {
            string city;
            cin >> city;
            if(visited[city]) {
                continue;
            }
            visited[city] = true;
        }
        cout << visited.size() << "\n";
    }
    return 0;
}