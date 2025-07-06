#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int min_length_subarray_with_sum(vector<int>& A, int X) {
    int n = A.size();
    int start = 0;
    int end = 0;
    int sum = 0;
    int min_length = INT_MAX;
    
    while (end < n) {

        sum += A[end];

        while (sum > X) {
            min_length = min(min_length, end - start + 1);
            sum -= A[start];
            start++;
        }
        
        end++;
    }
    
    return min_length == INT_MAX ? -1 : min_length;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, X;
        cin >> n >> X;

        vector<int> A(n);
        for (int &a : A) cin >> a;

        cout << min_length_subarray_with_sum(A, X) << endl;
    }

    return 0;
}

