#include <iostream>
#include <vector>
#include <stack>
#include <map>

using namespace std;


vector<bool>visited;
// map<int, bool>visited;


void initVisited(int n) {
    for(int i = 0; i < n; i++) {
        visited[i] = false;
    }
}



void dfs(int node) {
    visited[node] = true;
    // for(int i = 0; i < )
    return;
}


int main() {
    int N;
    cin >> N;
    vector<int>adj;
    int city = 1;
    while(N--) {
        int L;
        cin >> L;
        // build up adjacency list with complete graph
        city++;
    }
    initVisited(N);
    return 0;
}