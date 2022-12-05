#include <iostream>
#include <vector>

using namespace std;

string angryProfessor(int k, vector<int> a) {
    int result = 0;
    for (int idx = 0; idx < a.size(); idx++){
        if (a[idx] <= 0) {
            result++;   
        }
    }
    if (result >= k) {
        return "NO";
    } else {
        return "YES";
    }
}

int main(){
    
    string t_temp, result;
    int n, k;
    vector<int>a;
    cin >> n >> k;
    for (int t_itr = 0; t_itr < n; t_itr++) {
        int students;
        cin >> students;
        a[t_itr] = students;
    }

    result = angryProfessor(k, a);
    return 0;
}