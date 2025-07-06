#include <iostream>
#include <algorithm>  
using namespace std;


long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        long long a, b;
        cin >> a >> b;
        cout << lcm(a, b) << " " << gcd(a, b) << endl;
    }

    return 0;
}

