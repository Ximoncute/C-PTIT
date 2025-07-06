#include <iostream>
#include <cmath>
using namespace std;

void printPrimeFactors(long long N) {
    if (N % 2 == 0) {
        cout << 2 << " ";
        while (N % 2 == 0) N /= 2;
    }
    for (long long i = 3; i * i <= N; i += 2) {
        if (N % i == 0) {
            cout << i << " ";
            while (N % i == 0) N /= i;
        }
    }
    if (N > 2) cout << N << " ";
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
        printPrimeFactors(N);
    }
    return 0;
}

