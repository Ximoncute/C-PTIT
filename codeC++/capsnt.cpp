#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


vector<bool> sieve(int limit) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= limit; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i)
                isPrime[j] = false;
        }
    }
    return isPrime;
}


void findPrimePair(int N, const vector<bool>& isPrime) {
    for (int p = 2; p <= N / 2; ++p) {
        if (isPrime[p] && isPrime[N - p]) {
            cout << p << " " << (N - p) << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() {
    int T;
    cin >> T;  
    
    int maxN = 1000000;  
    vector<bool> isPrime = sieve(maxN); 
    
    while (T--) {
        int N;
        cin >> N;  
        findPrimePair(N, isPrime);  
    }

    return 0;
}

