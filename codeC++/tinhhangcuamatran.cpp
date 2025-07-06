#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const double EPS = 1e-9; 


int rankOfMatrix(vector<vector<double>>& mat, int N, int M) {
    int rank = 0;
    for (int col = 0; col < M; ++col) {
        
        int pivotRow = rank;
        while (pivotRow < N && fabs(mat[pivotRow][col]) < EPS) {
            pivotRow++;
        }

        
        if (pivotRow == N) continue;

        
        swap(mat[rank], mat[pivotRow]);


        for (int j = col + 1; j < M; ++j) {
            mat[rank][j] /= mat[rank][col];
        }
        mat[rank][col] = 1.0; 

        
        for (int r = 0; r < N; ++r) {
            if (r != rank && fabs(mat[r][col]) > EPS) {
                double multiplier = mat[r][col];
                for (int j = col; j < M; ++j) {
                    mat[r][j] -= multiplier * mat[rank][j];
                }
                mat[r][col] = 0.0; 
            }
        }

        
        rank++;
    }

    return rank;
}

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<vector<double>> mat(N, vector<double>(M));

        
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cin >> mat[i][j];
            }
        }

        
        cout << rankOfMatrix(mat, N, M) << endl;
    }

    return 0;
}
