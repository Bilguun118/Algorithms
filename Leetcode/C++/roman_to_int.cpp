#include<iostream>
#include<unordered_map>

using namespace std;


string intToRoman(int num) {
    string ans;
    unordered_map<int, string>mem;
    mem[1] = "I";
    mem[4] = "IV";
    mem[5] = "V";
    mem[9] = "IX";
    mem[10] = "X";
    mem[50] = "L";
    mem[100] = "C";
    mem[500] = "D";
    mem[1000] = "M";
    while(num > 0) {
        int digits = num % 10;
        num /= 10;
    }
    
}

int main(){
    int num  = 1989;
    string ans = intToRoman(num);
    return 0;
}