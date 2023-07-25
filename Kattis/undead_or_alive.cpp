#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

int main() {
    string msg;
    cin >> msg;
    int undead_counter = 0;
    int alive_counter = 0;
    cout << msg << "\n";
    for(int i = 0; i < msg.size(); i++) {
        if(msg[i] == ':') {
            if(msg[i+1] == ')' && i+1 < msg.size()) {
                alive_counter++;
            } else if (msg[i+1] == '(' && i+1 < msg.size()) {
                undead_counter++;
            } else {
                continue;
            }
        } 
    }
    if(undead_counter > 0 && alive_counter > 0) {
        cout << "double agent" << "-" << undead_counter << ":" << alive_counter;
    } else if(undead_counter == 0 && alive_counter == 0) {
        cout << "machine";
    } else if(undead_counter > 0 && alive_counter == 0) {
        cout << "undead";
    } else {
        cout << "alive";
    }
    return 0;
}