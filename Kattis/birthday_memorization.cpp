#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <utility>

using namespace std;

void memorize_birthday(unordered_map<string, pair<int, string>>& birthday_priorities) {
    vector<string>names;
    for(auto i: birthday_priorities) {
        names.push_back(i.second.second);
    }
    sort(names.begin(), names.end());
    int n = names.size();
    cout << n << "\n";
    for(int i = 0; i < n; i++) {
        cout << names[i] << "\n";
    }
    return;
}


int main() {
    int  N;
    cin >> N;
    unordered_map<string, pair<int, string>>birthday_priorities;
    while(N--) {
        string name_of_friend;
        int rate;
        string date;
        cin >> name_of_friend >> rate >> date;
        pair<int, string>pairwise;
        pairwise.first = rate;
        pairwise.second = name_of_friend;

        if(birthday_priorities.count(date) != 0 && birthday_priorities[date].first > rate) {
            continue;
        }
        birthday_priorities[date] = pairwise;
    }
    memorize_birthday(birthday_priorities);
    return 0;
}