#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int kadane(const vector<int>& arr) {
    int max_ending_here = arr[0];
    int max_so_far = arr[0];

    for (size_t i = 1; i < arr.size(); ++i) {
        max_ending_here = max(arr[i], max_ending_here + arr[i]);
        max_so_far = max(max_so_far, max_ending_here);
    }

    return max_so_far;
}

int maxRectangleSum(const vector<vector<int>>& A, int N, int M) {
    int max_sum = A[0][0];

    for (int top = 0; top < N; ++top) {
        vector<int> temp(M, 0);

        for (int bottom = top; bottom < N; ++bottom) {
            for (int col = 0; col < M; ++col) {
                temp[col] += A[bottom][col];
            }

            max_sum = max(max_sum, kadane(temp));
        }
    }

    return max_sum;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cin >> A[i][j];
            }
        }

        cout << maxRectangleSum(A, N, M) << endl;
    }

    return 0;
}

