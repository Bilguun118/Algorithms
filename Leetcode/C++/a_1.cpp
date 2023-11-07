#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> letters(n);
    for (int i = 0; i < n; i++) {
        cin >> letters[i];
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for (int i = 1; i <= m; i++) {
        pq.push({0, i});  // Initialize all lines with capacity 0
    }

    int unableToPlace = 0;  // Count of letters that couldn't be placed in the planned line

    for (int i = 0; i < n; i++) {
        int letter = letters[i];

        pair<int, int> line = pq.top();  // Get the line with the smallest capacity
        pq.pop();

        if (line.first == k) {
            unableToPlace++;  // If the line is full, increment the count
        } else {
            pq.push({line.first + 1, line.second});  // Increase the capacity of the line
        }
    }

    cout << unableToPlace << endl;

    return 0;
}
