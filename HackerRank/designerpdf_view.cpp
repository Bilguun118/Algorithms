#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int designerPdfViewer(vector<int> h, string word) {
    int result = 0, temp, entry;
    for (int idx = 0; idx < word.size(); idx++){
        char letter = word[idx];
        temp = int(letter);
        temp = temp - 97;
        entry = h[temp];
        if (entry >= result) {
            result = entry;
         }
    }
    return word.size() * result;
}

int main() {

    vector<int> h(26);

    for (int i = 0; i < 26; i++) {
        int h_item;
        cin >> h_item;

        h[i] = h_item;
    }

    string word;
    cin >> word;

    int result = designerPdfViewer(h, word);

    cout << result << endl;
    return 0;
}