#include <iostream>
#include <vector>
using namespace std;

int findKthPrimeFactor(int N, int k) {
    vector<int> factors;
    for (int d = 2; d * d <= N; ++d) {
        while (N % d == 0) {
            factors.push_back(d);
            N /= d;
        }
    }
    if (N > 1) factors.push_back(N);
    return (k <= factors.size()) ? factors[k - 1] : -1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, k;
        cin >> N >> k;
        cout << findKthPrimeFactor(N, k) << endl;
    }
    return 0;
}

