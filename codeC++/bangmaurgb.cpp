#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

long long factorial(int n) {
    long long res = 1;
    for (int i = 2; i <= n; ++i) {
        res *= i;
    }
    return res;
}

long long combination(int n, int k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    return factorial(n) / (factorial(k) * factorial(n - k));
}

long long count_valid_strings(int n, int r, int b, int g) {
    long long total_count = 0;

    for (int extra_r = 0; extra_r <= n - (r + b + g); ++extra_r) {
        for (int extra_b = 0; extra_b <= n - (r + b + g) - extra_r; ++extra_b) {
            int extra_g = n - (r + b + g) - extra_r - extra_b;
            if (extra_g >= 0) {
                long long total = combination(n, r + extra_r) * combination(n - (r + extra_r), b + extra_b);
                total *= combination(n - (r + extra_r) - (b + extra_b), g + extra_g);
                total_count += total;
            }
        }
    }

    return total_count;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, r, b, g;
        cin >> n >> r >> b >> g;

        cout << count_valid_strings(n, r, b, g) << endl;
    }

    return 0;
}

