#include<iostream>
#include<vector>

using namespace std;

int numRescueBoats(vector<int>& people, int limit) {
    // sort out the people
    // two pointer for light weight people to hard weight
    // check if that exceeds limit and keep track of counter to indicate how much boat can be
    int n = people.size();
    sort(people.begin(), people.end());
    int light = 0;
    int hard = n - 1;
    int boat = 0;
    while(light <= hard) {
        if(people[light] + people[hard] <= limit) {
            boat++;
            hard--;
            light++;
        } else {
            boat++;
            hard--;
        }
    }
    return boat;
}

int main() {
    vector<int> people = {3,5,3,4}; // 3,3,4,5
    int limit = 5;
    int ans = numRescueBoats(people, limit);
    cout << ans;
    return 0;
}