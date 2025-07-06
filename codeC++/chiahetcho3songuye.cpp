#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;


int ucln(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}


int bcnn(int a, int b) {
    return (a / ucln(a, b)) * b; 
}

long long timSoN(int X, int Y, int Z, int N) {

    int bcnnXYZ = bcnn(bcnn(X, Y), Z);

    long long minN = pow(10, N - 1);
    long long maxN = pow(10, N) - 1;

    long long firstMultiple = ((minN + bcnnXYZ - 1) / bcnnXYZ) * bcnnXYZ;

    if (firstMultiple >= minN && firstMultiple <= maxN) {
        return firstMultiple; 
    }

    return -1; 
}

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int X, Y, Z, N;
        cin >> X >> Y >> Z >> N;


        long long result = timSoN(X, Y, Z, N);
        cout << result << endl;
    }

    return 0;
}

