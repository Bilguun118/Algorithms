#include<iostream>
#include<string>
#include<unordered_map>
#include<queue>

using namespace std;

int main() {
    int n,m;
    unordered_map<string, int>memo;
    priority_queue<pair<int, string>>ans;
    cin >> n;
    while(n--) {
        string names;
        cin >> names;
        memo[names] = 0;
    }
    cin >> m;
    while(m--) {
        int attendance;
        cin >> attendance;
        while(attendance--) {
            string at_name;
            cin >> at_name;
            memo[at_name]++;
        }
    }
    for(auto& n: memo) {
        pair<int, string>current_paired;
        current_paired.first = n.second;
        current_paired.second = n.first;
        ans.push(current_paired);
    }
    while(!ans.empty()) {
        pair<int, string>attendee = ans.top();
        ans.pop();
        cout << attendee.first << " " << attendee.second << "\n";
    }
    return 0;
}