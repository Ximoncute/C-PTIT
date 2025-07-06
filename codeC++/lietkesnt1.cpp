#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


vector<bool> sieve(int max) {
    vector<bool> isPrime(max + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= max; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= max; j += i)
                isPrime[j] = false;
        }
    }
    return isPrime;
}

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) swap(a, b);
    
    vector<bool> primes = sieve(b);
    for (int i = a; i <= b; ++i) {
        if (primes[i]) cout << i << " ";
    }
    cout << endl;
    return 0;
}

