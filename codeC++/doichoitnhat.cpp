#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int min_swaps_to_sort(vector<int>& A) {
    int n = A.size();
    vector<pair<int, int>> arr(n);

    for (int i = 0; i < n; ++i) {
        arr[i] = {A[i], i};
    }
    sort(arr.begin(), arr.end());
    vector<bool> visited(n, false);
    
    int swaps = 0;

    for (int i = 0; i < n; ++i) {
        if (visited[i] || arr[i].second == i) {
            continue;
        }
        int cycle_size = 0;
        int x = i;
        
        while (!visited[x]) {
            visited[x] = true;
            x = arr[x].second;
            ++cycle_size;
        }

        if (cycle_size > 1) {
            swaps += (cycle_size - 1);
        }
    }

    return swaps;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> A(n);
        for (int &a : A) cin >> a;

        cout << min_swaps_to_sort(A) << endl;
    }

    return 0;
}

