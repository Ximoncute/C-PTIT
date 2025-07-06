#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

long long dem_xau_con(const string& s) {
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    long long count = 0;
    for (const auto& pair : freq) {
        int f = pair.second;
        count += (long long)f * (f + 1) / 2;
    }

    return count;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); 

    vector<string> tests(T);
    for (int i = 0; i < T; ++i) {
        getline(cin, tests[i]);
    }

    for (const string& s : tests) {
        cout << dem_xau_con(s) << endl;
    }

    return 0;
}

