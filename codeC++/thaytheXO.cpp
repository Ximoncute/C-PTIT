#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void bfs(int i, int j, vector<vector<char>>& mat, vector<vector<bool>>& visited, int N, int M) {
    queue<pair<int, int>> q;
    q.push({i, j});
    visited[i][j] = true;
    
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        
        for (int dir = 0; dir < 4; ++dir) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            
            
            if (nx >= 0 && ny >= 0 && nx < N && ny < M && mat[nx][ny] == 'O' && !visited[nx][ny]) {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
}

void solve(vector<vector<char>>& mat, int N, int M) {
    vector<vector<bool>> visited(N, vector<bool>(M, false));
    
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
    
            if ((i == 0 || i == N-1 || j == 0 || j == M-1) && mat[i][j] == 'O' && !visited[i][j]) {
                bfs(i, j, mat, visited, N, M);
            }
        }
    }
    
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (mat[i][j] == 'O' && !visited[i][j]) {
                mat[i][j] = 'X';
            }
        }
    }
}

int main() {
    int T;
    cin >> T; 
    while (T--) {
        int N, M;
        cin >> N >> M; 

        vector<vector<char>> mat(N, vector<char>(M));

    
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cin >> mat[i][j];
            }
        }

        
        solve(mat, N, M);

        
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

