#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 10000;  

vector<bool> sieve(MAX_N + 1, true);

void generatePrimes() {
    sieve[0] = sieve[1] = false;  
    for (int i = 2; i * i <= MAX_N; ++i) {
        if (sieve[i]) {
            for (int j = i * i; j <= MAX_N; j += i) {
                sieve[j] = false;
            }
        }
    }
}

int main() {
    generatePrimes(); 

    int T;
    cin >> T;  

    while (T--) {
        int N;
        cin >> N;  // Ð?c s? N

        for (int i = 2; i <= N; ++i) {
            if (sieve[i]) {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

