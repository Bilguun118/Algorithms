#include <iostream>
#include <string>

using namespace std;

void determine_halloween(string date, int day) {
    if(date[0] == 'O' && day == 31) {
        cout << "yup";
    } else if (date[0] == 'D' && day == 25) {
        cout << "yup";
    } else {
        cout << "nope";
    }
    return;
}

int main() {
    string date;
    int day;
    cin >> date >> day;
    determine_halloween(date, day);
}