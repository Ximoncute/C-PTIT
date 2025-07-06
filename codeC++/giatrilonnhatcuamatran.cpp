#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubmatrixValue(int N, vector<vector<int>>& A) {

    vector<vector<int>> diagMainSum(N + 1, vector<int>(N + 1, 0));
    vector<vector<int>> diagSecSum(N + 1, vector<int>(N + 1, 0));
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            diagMainSum[i + 1][j + 1] = diagMainSum[i][j] + A[i][j];
            diagSecSum[i + 1][j] = diagSecSum[i][j + 1] + A[i][j];
        }
    }
    
    int maxValue = -1000000000;

    for (int r1 = 0; r1 < N; ++r1) {
        for (int c1 = 0; c1 < N; ++c1) {
            for (int size = 1; r1 + size - 1 < N && c1 + size - 1 < N; ++size) {
                int r2 = r1 + size - 1;
                int c2 = c1 + size - 1;

                
                int mainDiagSum = diagMainSum[r2 + 1][c2 + 1] - diagMainSum[r1][c1];
                int secDiagSum = diagSecSum[r2 + 1][c1] - diagSecSum[r1][c2 + 1];

                
                int value = mainDiagSum - secDiagSum;
                maxValue = max(maxValue, value);
            }
        }
    }

    return maxValue;
}

int main() {
    int N;
    cin >> N;
    vector<vector<int>> A(N, vector<int>(N));

    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> A[i][j];
        }
    }

    
    cout << maxSubmatrixValue(N, A) << endl;

    return 0;
}
