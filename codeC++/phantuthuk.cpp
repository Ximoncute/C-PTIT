#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findKthSmallest(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end());
    return arr[k - 1];
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); 
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int result = findKthSmallest(arr, k);
        cout << result << endl;
    }
    
    return 0;
}

