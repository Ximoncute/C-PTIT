#include <iostream>
#include <vector>
using namespace std;


void primeFactors(int n) {
    vector<pair<int, int>> factors;
    int count;

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            count = 0;
            while (n % i == 0) {
                ++count;
                n /= i;
            }
            factors.emplace_back(i, count);
        }
    }
 
    if (n > 1) {
        factors.emplace_back(n, 1);
    }

    for (const auto &factor : factors) {
        cout << factor.first << ' ' << factor.second << ' ';
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        primeFactors(N);
    }

    return 0;
}

