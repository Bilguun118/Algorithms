#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>


using namespace std;

void checkMagazine(vector<string> s1, vector<string> s2) {
    unordered_map<string, int>mem;
    vector<string>longer, shorter;
    if(s1.size() < s2.size()) {
        longer = s2;
        shorter = s1;
    } else {
        longer = s1;
        shorter = s2;
    }
    for(int i = 0; i < longer.size(); i++) {mem[longer[i]]++;}
    for(int i = 0; i < shorter.size(); i++) {mem[shorter[i]]--;}
    for(auto j:mem) {
        if(j.second < 0) {cout << "No"; return;}
    }
    cout << "Yes";
    return;
}

int main() {
    vector<string> s1 = {"two","times","three","is","not", "four"};
    vector<string> s2 = {"two","times","two","is","four"};
    vector<string> s3 = {"attack","at","dawn"};
    vector<string> s4 = {"Attack","at","dawn"};
    checkMagazine(s3,s4);
    return 0;
}