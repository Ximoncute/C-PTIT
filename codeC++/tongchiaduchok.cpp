#include <iostream>
using namespace std;

int main() {
    int T; 
    cin >> T;
    
    while (T--) {
        long long N, K;
        cin >> N >> K;


        long long sum = 0;
        for (long long i = 1; i <= N; ++i) {
            sum += i % K;
        }


        if (sum == K) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}

