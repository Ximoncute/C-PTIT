#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

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
        sort(A.begin(), A.end());   
        int min_diff = abs(A[1] - A[0]);
        for (int i = 1; i < n - 1; ++i) {
            min_diff = min(min_diff, abs(A[i + 1] - A[i]));
        }
        cout << min_diff << endl;
    }
    return 0;
}

