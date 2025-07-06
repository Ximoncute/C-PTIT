#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;


bool isSubstring(const string& str1, const string& str2) {
    return str2.find(str1) != string::npos;
}

int main() {
    int N;
    cin >> N;
    
    vector<string> passwords(N);
    for (int i = 0; i < N; ++i) {
        cin >> passwords[i];
    }
    

    sort(passwords.begin(), passwords.end(), [](const string& a, const string& b) {
        return a.length() < b.length();
    });
    
    int count = 0
    unordered_set<string> checked;
    
    for (const auto& pw1 : passwords) {

        for (const auto& pw2 : checked) {
            if (isSubstring(pw1, pw2)) {
                count++;
            }
        }

        checked.insert(pw1);
    }
    
    cout << count << endl;
    
    return 0;
}

