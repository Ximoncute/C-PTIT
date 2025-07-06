#include <iostream>
#include <vector>
using namespace std;

void processTestCase() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> matrix(N, vector<int>(M));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> matrix[i][j];
        }
    }

    vector<bool> rows(N, false);
    vector<bool> cols(M, false);
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (matrix[i][j] == 1) {
                rows[i] = true;
                cols[j] = true;
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (rows[i] || cols[j]) {
                matrix[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (j > 0) cout << " ";
            cout << matrix[i][j];
        }
        cout << endl;
    }
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        processTestCase();
    }
    
    return 0;
}

