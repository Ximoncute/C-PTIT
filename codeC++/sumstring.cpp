#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isSumString(const string &S, int l1, int l2) {
    int len = S.length();
    if (l1 + l2 >= len) return false; 
    
    string s1 = S.substr(0, l1);
    string s2 = S.substr(l1, l2);
    
    vector<string> fibSeq = {s1, s2};
    
    while (true) {
        string next = to_string(stoi(fibSeq.back()) + stoi(fibSeq[fibSeq.size() - 2]));
        if (S.find(next, l1 + l2) != string::npos && S.substr(l1 + l2, next.length()) == next) {
            fibSeq.push_back(next);
            l1 = l2;
            l2 = next.length();
            if (l1 + l2 == len) return true;
        } else {
            return false;
        }
    }
}

bool checkSumString(const string &S) {
    int n = S.length();
    
    for (int l1 = 1; l1 <= n / 3; ++l1) {
        for (int l2 = 1; l1 + l2 <= n / 2; ++l2) {
            if (isSumString(S, l1, l2)) {
                return true;
            }
        }
    }
    
    return false;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();
    
    while (T--) {
        string S;
        getline(cin, S);
        
        if (checkSumString(S)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

