#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <set>

using namespace std;

void HandOfStraights(vector<int>&hands, int groupsize) {
    int rem = hands.size() % groupsize;
    if (rem != 0) {
        cout << "CANNOT DIVIDE INTO GROUP: " << groupsize << endl; 
        return;
    }
    map<int, int> card_count;
    // Make Min Heap
    priority_queue<int, vector<int>, greater<int>>q;
    // Count Frequency of each card
    for (auto &crd: hands) {
        cout << "THE CRD IS: " << crd << endl;
        card_count[crd]++;
        if (card_count[crd] <= 1) {
            // Push to Queue (Remove Any Duplicates From Array)
            q.push(crd);
        }
    }
    // Queue Elements
    while (!q.empty()) {
        int first_element = q.top();
        // Calculate Sub Arrays
        for (int i = first_element; i < (first_element + groupsize); i++) {
            if (card_count.find(i) == card_count.end()) {
                cout << "CARD IS NOT FOUND FROM MAP" << endl;
                return;
            }

            card_count[i]-=1;
            if (card_count[i] == 0) {
                if(i != q.top()){
                    cout << "NOT EQUAL THE I: " << i << "THE FIRST ELEMENT: " << first_element << endl;
                    return;
                }
                q.pop();
            }
            cout << "THE FIRST ELEMENT IS: " << first_element << endl;
            cout << "CARD IS:" << i << " THE CARD COUNT IS: " << card_count[i] << endl;
        }
    }
    return;
}

int main() {
    vector<int> hands = {
      1,2,3,6,2,3,4,7,8  
    };
    int groupSize = 3;
    for (int i = 0; i < hands.size(); i++) {
        cout << "ALL HANDS: " << hands[i] << endl;
    }
    HandOfStraights(hands, groupSize);
}