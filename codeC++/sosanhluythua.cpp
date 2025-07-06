#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int dem_cac_cap(const vector<int>& X, const vector<int>& Y) {
    int count = 0;
    vector<int> sorted_Y = Y;

    sort(sorted_Y.begin(), sorted_Y.end());

    for (int x : X) {

        int pos = lower_bound(sorted_Y.begin(), sorted_Y.end(), x) - sorted_Y.begin();
        count += pos;
    }

    return count;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, m;
        cin >> n >> m;

        vector<int> X(n), Y(m);

        for (int i = 0; i < n; ++i) {
            cin >> X[i];
        }

        for (int i = 0; i < m; ++i) {
            cin >> Y[i];
        }

        cout << dem_cac_cap(X, Y) << endl;
    }

    return 0;
}

