#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        unordered_map<int, int> frequency;
        
        for (int i = 0; i < N; ++i) {
            int num;
            cin >> num;
            frequency[num]++;
        }
        
        int count = 0;
        for (auto &entry : frequency) {
            if (entry.second > 1) {
                count++;
            }
        }
        
        cout << count << endl;
    }

    return 0;
}

