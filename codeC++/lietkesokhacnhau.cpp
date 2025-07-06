#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    set<int> uniqueNumbers;

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        uniqueNumbers.insert(num);
    }

    vector<int> sortedNumbers(uniqueNumbers.begin(), uniqueNumbers.end());
    sort(sortedNumbers.begin(), sortedNumbers.end());

    for (size_t i = 0; i < sortedNumbers.size(); ++i) {
        if (i > 0) cout << " ";
        cout << sortedNumbers[i];
    }
    cout << endl;
    
    return 0;
}

