#include <iostream>
#include <vector>
using namespace std;
int findMaximum(const vector<int>& A, int n) {
    int low = 0, high = n - 1;
        while (low <= high) {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || A[mid] > A[mid - 1]) && (mid == n - 1 || A[mid] > A[mid + 1])) {
            return A[mid];
        }
        if (A[mid] < A[mid + 1]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }   
    return -1; 
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
        cout << findMaximum(A, n) << endl;
    }
    return 0;
}

