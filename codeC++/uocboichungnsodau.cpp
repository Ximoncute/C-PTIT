#include <iostream>
#include <numeric>  
using namespace std;


long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int n;
        cin >> n;  
        long long result = 1;
        for (int i = 1; i <= n; ++i) {
            result = lcm(result, i);
        }
        cout << result << endl;  

    return 0;
}

