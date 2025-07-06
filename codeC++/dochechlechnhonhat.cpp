#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<long long> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
  
        sort(A.begin(), A.end());
        
       
        long long min_diff = A[1] - A[0];
        for (int i = 1; i < N - 1; ++i) {
            min_diff = min(min_diff, A[i + 1] - A[i]);
        }

        cout << min_diff << endl;
    }

    return 0;
}

