#include<iostream>

using namespace std;



int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    int ans = 0;
    int yeardiff = y1 - y2;
    int monthdiff = m1 - m2;
    int daydiff = d1 - d2;

    bool switchmd = false;
    if (yeardiff < 0) {
        return ans;
    }
    if(yeardiff > 0) {
        ans += yeardiff * 10000;
    } else if(monthdiff > 0) {
        ans += monthdiff * 500;
    } else if (daydiff > 0) {
        ans += daydiff * 15;
    }
    cout << yeardiff << " : " << monthdiff << " : " << daydiff << "\n";
    return ans;
}


int main() {
    int y1 = 1014;
    int y2 = 1015;
    int m1 = 7;
    int m2 = 1;
    int d1 = 2;
    int d2 = 1;
    int ans = libraryFine(d1,m1,y1,d2,m2,y2);
    cout << ans;
    return 0;
}