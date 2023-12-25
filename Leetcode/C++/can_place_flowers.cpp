#include<iostream>
#include<vector>

using namespace std;

bool canPlaceFlower(vector<int>flowerbed, int n) {
    bool ans = false;
    int m = flowerbed.size();
    int counter = 0;
    if(m==1) {
        if(flowerbed[0] != 1) counter++;
        if(counter >= n) return true;
        else return ans;
    }
    // check 1 neighbor case first and last element
    if(flowerbed[0] == 0 && flowerbed[1] == 0) flowerbed[0] = 1; counter++;
    if(flowerbed[m-1] == 0 && flowerbed[m-2] == 0) flowerbed[m-1] = 1; counter++;

    for(int i = 0; i < m-1; i++) {
        if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0 && flowerbed[i] == 0) {
            counter++;
            flowerbed[i] = 1;
        }
    }
    
    if(counter >= n) ans = true;
    return ans;
}

int main() {
    return 0;
}