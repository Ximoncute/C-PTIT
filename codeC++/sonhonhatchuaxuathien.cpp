#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findSmallestMissingPositive(vector<int>& A, int n) { 
    vector<bool> presence(n + 1, false);
    for (int i = 0; i < n; ++i) {
        if (A[i] > 0 && A[i] <= n) {
            presence[A[i]] = true;
        }
    }
    for (int i = 1; i <= n; ++i) {
        if (!presence[i]) {
            return i;
        }
    }
    return n + 1;
}

int main() {
    int T; 
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;       
        vector<int> A(n);
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }
        cout << findSmallestMissingPositive(A, n) << endl;
    }

    return 0;
}

