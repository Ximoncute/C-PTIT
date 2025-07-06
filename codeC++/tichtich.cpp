#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n, m;
        cin >> n >> m;
        
        vector<int> A(n);
        vector<int> B(m);

        int maxA = numeric_limits<int>::min();
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
            if (A[i] > maxA) maxA = A[i];
        }

        int minB = numeric_limits<int>::max();
        for (int j = 0; j < m; ++j) {
            cin >> B[j];
            if (B[j] < minB) minB = B[j];
        }

        cout << maxA * minB << endl;
    }
    
    return 0;
}

