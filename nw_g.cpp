#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int findFavNum(vector<int> &fav_nums) {
    int counter = 0;
    for (int i = 0; i < fav_nums.size(); i++) {
        if ((i > 0 && fav_nums[i] > fav_nums[i - 1]) && (i < fav_nums.size() - 1 && fav_nums[i] > fav_nums[i+1])) {
            counter++;
        }
        if ((i > 0 && fav_nums[i] < fav_nums[i - 1]) && (i < fav_nums.size() - 1 && fav_nums[i] < fav_nums[i+1])) {
            counter++;
        }
    }
    return counter;
}

int main() {
    int n;
    int result;
    cin >> n;
    vector<int>fav_nums;
    while(n--) {
        int temp;
        cin >> temp;
        fav_nums.push_back(temp);
    }
    result = findFavNum(fav_nums);
    cout << result << endl;
    return 0;
}