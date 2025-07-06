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


void findPrimesInRange(int M, int N, const vector<bool>& isPrime) {
    for (int i = M; i <= N; ++i) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;  
    
    int maxN = 10000;  
    vector<bool> isPrime = sieve(maxN);  

    while (T--) {
        int M, N;
        cin >> M >> N;  // Ð?c kho?ng [M, N]
        findPrimesInRange(M, N, isPrime);  
    }

    return 0;
}

