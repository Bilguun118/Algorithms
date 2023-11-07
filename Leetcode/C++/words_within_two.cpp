#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std; 

void wordsWithinTwoEditT(vector<string>& word_one, vector<string>& word_two, map<string, string> mtch) {
    vector<string> result;

    int n = word_one[0].size();
    for (int i = 0; i < word_one.size(); i++) {
        for (int j = 0; j < word_two.size(); j++) {
            int diff = 0;
            for(int idx = 0; idx < n; idx++) {
                if (word_one[i][idx] != word_two[j][idx]) {
                    diff++;
                }
            }
            if (diff <= 2) {
                result.push_back(word_one[i]);
                break;
            }
        }
    }
}


int main() {
    vector<string>word_one;
    vector<string>word_two;
    map<string, string> mtch;

    word_one.push_back("word");
    word_one.push_back("note");
    word_one.push_back("ants");
    word_one.push_back("wood");

    word_two.push_back("wood");
    word_two.push_back("joke");
    word_two.push_back("moat");
    wordsWithinTwoEditT(word_one, word_two, mtch);
    return 0; 
}