#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <utility>
#include <queue>

using namespace std;


// problems/INFLATION2

void determine_inflation(string operation, vector<double>& prices) {
    // Determine inflation and set
    const string inflation = "INFLATION";
    const string set = "SET";
    int n = prices.size();
    int ans = 0;
    if (operation == inflation) {
        int x;
        cin >> x;
        for(int i = 0; i < n; i++) {
            ans += prices[i] + x;
        }
    } else {
        int z,y;
        cin >> z >> y;
        for(int i = 0; i < n; i++) {
            if(prices[i] == z) {
                prices[i] = y;
            }
            cout << "EACH PRICE: " << prices[i] << "\n";
            ans += prices[i];
        }
    }
    cout << "ANSWER: " << ans << "\n";
    return;
}


int main() {
    int N;
    const string inflation = "INFLATION";
    const string set = "SET";
    vector<double>prices;
    queue<pair<bool, double>>oper;
    cin >> N;
    while(N--) {
        double p;
        cin >> p;
        prices.push_back(p);
    }
    // Days and Operation
    int days;
    cin >> days;
    while(days--) {
        double ans = 0;
        string operation;
        cin >> operation;
        pair<bool, double>pairwise;
        if (operation == inflation) {
            double x;
            cin >> x;
            pairwise.first = true;
            pairwise.second = x;
        } else {
            double z,y;
            cin >> z >> y;
            pairwise.first = false;
            pairwise.second = y;
        }
        // cout << ans << "\n";
        cout << "DAYS COUNTER: " << days << "\n";
    }
    return 0;
}