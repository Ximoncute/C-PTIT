#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double polygonArea(const vector<pair<int, int>>& points) {
    int n = points.size();
    double area = 0.0;
    for (int i = 0; i < n; ++i) {
        int x1 = points[i].first, y1 = points[i].second;
        int x2 = points[(i + 1) % n].first, y2 = points[(i + 1) % n].second;
        area += x1 * y2 - y1 * x2;
    }
    return abs(area) / 2.0;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        
        vector<pair<int, int>> points(N);
        for (int i = 0; i < N; ++i) {
            cin >> points[i].first >> points[i].second;
        }

        cout << fixed << setprecision(1) << polygonArea(points) << endl;
    }

    return 0;
}

