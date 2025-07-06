#include <iostream>
#include <string>
using namespace std;

bool isValid(const string &num) {
    for (size_t i = 1; i < num.size(); ++i) {
        if (abs(num[i] - num[i - 1]) != 1) {
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();  
    while (T--) {
        string num;
        getline(cin, num);
        cout << (isValid(num) ? "YES" : "NO") << endl;
    }

    return 0;
}

