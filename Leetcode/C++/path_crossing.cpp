#include<iostream>
#include<unordered_map>
#include<unordered_set>

using namespace std;

// North = Hoid
// South = Umnud
// East = Zuun
// West = Baruun

int main() {
    string d;
    unordered_map<char, pair<int, int>>moves;
    moves['N'] = {0,1};
    moves['S'] = {0,-1};
    moves['E'] = {-1,0};
    moves['W'] = {1,0};
    cin >> d;
    unordered_set<string>visited;
    visited.insert("0.0");
    int x = 0; 
    int y = 0;

    for(int i = 0; i < d.size(); i++) {
        pair<int,int>current_path = moves[d[i]];
        int dx = current_path.first;
        int dy = current_path.second;

        x += dx;
        y += dy;

        string hash = to_string(x) + "." +to_string(y);
        if(visited.find(hash) != visited.end()) cout << "True"<<"\n"; break;
        visited.insert(hash);
    }
    cout << "False"<<"\n";
    return 0;
}