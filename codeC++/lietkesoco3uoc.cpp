#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MAX_N = 1000000;  

vector<bool> isPrime(MAX_N + 1, true);
vector<int> validNumbers;

void generatePrimes() {
    isPrime[0] = isPrime[1] = false; 
    for (int i = 2; i * i <= MAX_N; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX_N; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

void generateValidNumbers() {
    for (int i = 2; i <= sqrt(MAX_N); ++i) {
        if (isPrime[i]) {
            int p2 = i * i;
            if (p2 <= MAX_N) {
                validNumbers.push_back(p2);
            }
        }
    }
}

int main() {
    generatePrimes();      
    generateValidNumbers();

    int T;
    cin >> T; 

    while (T--) {
        int N;
        cin >> N; 

    
        bool found = false;
        for (int num : validNumbers) {
            if (num > N) break;
            cout << num << " ";
            found = true;
        }
        if (found) cout << endl;
        else cout << endl;
    }

    return 0;
}

