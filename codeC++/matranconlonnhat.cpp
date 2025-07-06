#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int max_square_size_with_all_1s(vector<vector<int>>& A, int N, int M) {
    vector<vector<int>> dp(N, vector<int>(M, 0));
    int max_size = 0;
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (A[i][j] == 1) {
                if (i == 0 || j == 0) {
                    dp[i][j] = 1;  
                } else {
                    dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
                }
                max_size = max(max_size, dp[i][j]);
            }
        }
    }
    
    return max_size;
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

        cout << max_square_size_with_all_1s(A, N, M) << endl;
    }

    return 0;
}

