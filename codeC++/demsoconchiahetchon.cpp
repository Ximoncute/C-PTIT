#include <iostream>
#include <string>
#include <vector>

using namespace std;


int toInt(const string& s) {
    int num = 0;
    for (char c : s) {
        num = num * 10 + (c - '0');
    }
    return num;
}


int countDivisibleSubstrings(const string& S, int N) {
    int count = 0;
    int length = S.length();

    for (int i = 1; i < (1 << length); ++i) {
        string subStr;
        for (int j = 0; j < length; ++j) {
            if (i & (1 << j)) {
                subStr += S[j];
            }
        }
        if (!subStr.empty() && toInt(subStr) % N == 0) {
            ++count;
        }
    }
    
    return count;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int M, N;
        cin >> M >> N;
        string S;
        cin >> S;
        
        cout << countDivisibleSubstrings(S, N) << endl;
    }
    
    return 0;
}

