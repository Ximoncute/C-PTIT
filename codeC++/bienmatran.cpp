#include <iostream>
#include <vector>
using namespace std;

void printBoundary(const vector<vector<int>>& matrix, int N) {
    vector<bool> printed(N * N, false);

    for (int j = 0; j < N; ++j) {
        cout << matrix[0][j] << " ";
        printed[0 * N + j] = true;
    }

    for (int i = 1; i < N - 1; ++i) {
        cout << matrix[i][N - 1] << " ";
        printed[i * N + (N - 1)] = true;
    }

    if (N > 1) {
        for (int j = N - 1; j >= 0; --j) {
            cout << matrix[N - 1][j] << " ";
            printed[(N - 1) * N + j] = true;
        }
    }

    for (int i = N - 2; i >= 1; --i) {
        cout << matrix[i][0] << " ";
        printed[i * N + 0] = true;
    }
    
    cout << endl;
}

void processTestCase() {
    int N;
    cin >> N;
    
    vector<vector<int>> matrix(N, vector<int>(N));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    printBoundary(matrix, N);
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        processTestCase();
    }
    
    return 0;
}

