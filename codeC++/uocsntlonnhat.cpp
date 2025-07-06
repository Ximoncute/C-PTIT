#include <iostream>
#include <cmath>
using namespace std;


long long largestPrimeFactor(long long N) {
    long long maxPrime = -1;

    
    while (N % 2 == 0) {
        maxPrime = 2;
        N /= 2;
    }


    for (long long i = 3; i * i <= N; i += 2) {
        while (N % i == 0) {
            maxPrime = i;
            N /= i;
        }
    }

 
    if (N > 2) maxPrime = N;

    return maxPrime;
}

int main() {
    int T;
    cin >> T;  

    while (T--) {
        long long N;
        cin >> N;  
        cout << largestPrimeFactor(N) << endl;  
    }

    return 0;
}

