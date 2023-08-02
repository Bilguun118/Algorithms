#include <iostream>
#include <string>

using namespace std;

int main() {
    string email;
    cin >> email;
    int lower, upper, whitespace, symbol;
    lower = upper = whitespace = symbol = 0;
    for(int i = 0; i < email.size(); i++) {
        if(email[i] >= 32 && email[i] <= 64) {
            symbol++;
        }
        if(email[i] >= 91 && email[i] <= 96 || (email[i] >= 123 && email[i] <= 126)) {
            if(email[i] == 95) {
                whitespace++;
                continue;
            }
            symbol++;
        }
        if(email[i] >= 65 && email[i] <= 90) {
            upper++;
        } 
        if(email[i] >= 97 && email[i] <= 122) {
            lower++;
        }
    }
    long double l, u, w, s;
    l = double(lower) / email.size();
    u = double(upper) / email.size();
    w = double(whitespace) / email.size();
    s = double(symbol) / email.size();

    printf("%.13Lf\n", w);
    printf("%.13Lf\n", l);
    printf("%.13Lf\n", u);
    printf("%.13Lf\n", s);
    return 0;
}