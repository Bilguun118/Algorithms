#include<iostream>
#include<string>

using namespace std;

int main() {
    string chessboard;
    cin >> chessboard;
    for(int i = 0; i < chessboard.size(); i++) {
        cout << chessboard[i];
    }
    return 0;
}