#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    // number of packagetypes t
    // number of stores B
    // ROWS OF A -> NUMBER OF PACKAGETYPES EACH STORE HAS (STRING)
    // 
    int T,B;
    int pt = 0;
    cin >> T >> B;
    while(B--) {
        // number of package type for each store (contains)
        int A;
        cin >> A;
        pt += A;
    }
    unordered_map<string, int>memorize;
    vector<int>ans;
    int packages = pt+T;
    while(packages--) {
        string package_name;
        int version;
        cin >> package_name >> version;
        if(memorize.find(package_name) == memorize.end()) {
            memorize[package_name] = version;
        } else {
            int increment = 0;
            if(memorize[package_name] == version) {
                continue;
            }

            if (memorize[package_name] < version) {
                increment = version - memorize[package_name];
            } 

            if (memorize[package_name] > version) {
                increment = memorize[package_name] - version;
            }
            ans.push_back(increment);
        }
    }
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << "\n";
    }
    return 0;
}