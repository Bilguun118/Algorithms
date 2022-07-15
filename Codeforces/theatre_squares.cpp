#include <iostream>
#include <math.h>
using namespace std;

// Theatre Squares CodeForces Submission
int main(){
    double n,m,size;
    long long flagstone, iteration, result;
    cin >> n >> m >> size;
    flagstone = ceil(n / size);
    iteration = ceil(m / size);
    result = flagstone * iteration;
    cout << result << endl;
    return 0;
}