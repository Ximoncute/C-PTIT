#include <iostream>
using namespace std;

int solve(int N, int K) {
    if (K == 0) {
        return 0; 
    }
    int S = 0;
    for (int i = 1; i <= N; ++i) {
        S += i % K;
    }
    return S;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, K;
        cin >> N >> K;
        cout << solve(N, K) << endl;
    }
    
    return 0;
}

