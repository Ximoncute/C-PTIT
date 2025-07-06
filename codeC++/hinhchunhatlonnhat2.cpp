#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int maxHistogramArea(vector<int>& heights) {
    stack<int> st;
    int max_area = 0;
    int area = 0;
    int i = 0;

    while (i < heights.size()) {
        if (st.empty() || heights[i] >= heights[st.top()]) {
            st.push(i++);
        } else {
            int top_of_stack = st.top();
            st.pop();
            area = heights[top_of_stack] * (st.empty() ? i : i - st.top() - 1);
            max_area = max(max_area, area);
        }
    }

    while (!st.empty()) {
        int top_of_stack = st.top();
        st.pop();
        area = heights[top_of_stack] * (st.empty() ? i : i - st.top() - 1);
        max_area = max(max_area, area);
    }

    return max_area;
}

int maxRectangleArea(vector<vector<int>>& A, int N, int M) {
    vector<int> heights(M, 0);
    int max_area = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (A[i][j] == 0) {
                heights[j] = 0;
            } else {
                heights[j] += A[i][j];
            }
        }
        max_area = max(max_area, maxHistogramArea(heights));
    }

    return max_area;
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

        cout << maxRectangleArea(A, N, M) << endl;
    }

    return 0;
}

