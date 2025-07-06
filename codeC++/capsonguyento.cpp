#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 10000; 

vector<bool> isPrime(MAX_N + 1, true);
vector<int> primes;


void generatePrimes() {
    isPrime[0] = isPrime[1] = false;  
    for (int i = 2; i * i <= MAX_N; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX_N; j += i) {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= MAX_N; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
}

int main() {
    generatePrimes(); 

    int T;
    cin >> T; 

    while (T--) {
        int N;
        cin >> N; 

        bool found = false;
        for (int p : primes) {
            if (p > N / 2) break; 
            int q = N - p;
            if (q >= p && isPrime[q]) {
                cout << p << " " << q << endl;
                found = true;
                break;
            }
        }
    }

    return 0;
}

