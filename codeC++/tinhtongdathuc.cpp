#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;


long long evaluatePolynomial(int n, int x, const vector<int>& coefficients) {
    long long result = 0;
    long long powerOfX = 1;  

 
    for (int i = 0; i < n; ++i) {
        result = (result + coefficients[i] * powerOfX) % MOD;
        powerOfX = (powerOfX * x) % MOD;  
    }

    return result;
}

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int n, x;
        cin >> n >> x;

        vector<int> coefficients(n);
        for (int i = 0; i < n; ++i) {
            cin >> coefficients[i];
        }

        cout << evaluatePolynomial(n, x, coefficients) << endl;
    }

    return 0;
}

