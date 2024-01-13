#include<iostream>
#include<vector>
#include<stack>

using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
    stack<int>st;
    vector<int>ans;
    int n = asteroids.size();
    for(int i = 0; i < n; i++) {
        st.push(asteroids[i]);
    }

    while(!st.empty()) {
        int currentAstr = st.top();
        st.pop();
        if(st.empty()) {
            ans.push_back(currentAstr);
            break;
        }
        int nextAstr = st.top();
        st.pop();
        cout << "CURRENT: " << currentAstr << "\n";
        cout << "NEXT: " << nextAstr << "\n";
        if(currentAstr < 0 && nextAstr > 0) {
            if(abs(currentAstr) > abs(nextAstr)) {
                st.push(currentAstr);
            } else if(abs(currentAstr) < abs(nextAstr)) {
                st.push(nextAstr);
            }
        } else {
            ans.push_back(currentAstr);
            ans.push_back(nextAstr);
        }
    }
    return ans;
}


vector<int> asteroidCollisionV1(vector<int>& asteroids) {
    int n = asteroids.size();
    stack<int>st;
    for(int i = 0; i < n; i++) {
        if(asteroids[i] >= 0 || st.empty()) st.push(asteroids[i]);
        else {
            while(!st.empty() && st.top() > 0 && st.top() < abs(asteroids[i])) {
                st.pop();
            }
            if(!st.empty() && st.top() == abs(asteroids[i])) {
                st.pop();
            } else {
                if(st.empty() || st.top() < 0) st.push(asteroids[i]);
            }
        }
    }
    vector<int>ans(st.size());
    for(int i = st.size() - 1; i >= 0; i--) {
        ans[i] = st.top();
        st.pop();
    }
    return ans;
}


int main(){
    vector<int> asteroids = {-2,1,-2,-2};
    vector<int> asteroids2 = {8,-8};
    vector<int>ans = asteroidCollisionV1(asteroids);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << "\n";
    }
    return 0;
}