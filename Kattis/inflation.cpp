#include <iostream>
#include <string>
#include <vector>

using namespace std;


void determine_inflation() {
    
    return;
}


int main() {
    int N;
    // Determine inflation and set
    const string inflation = "INFLATION";
    const string set = "SET";
    
    vector<double>prices;
    while(N--) {
        double p;
        cin >> p;
        prices.push_back(p);
    }
    // Days and Operation
    int days;
    cin >> days;
    while(days--) {
        string operation;
        cin >> operation;
        cout << "DAYS COUNTER: " << days << "\n";
        if(operation == inflation) {
            int x;
            cin >> x;
        } else {
            int z,y;
            cin >> z >> y;
        }
    }
    for(int i = 0; i < prices.size(); i++) {
        cout << prices[i] << "\n";
    }
    return 0;
}