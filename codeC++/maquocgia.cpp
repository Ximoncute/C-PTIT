#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore(); 

    while (T--) {
        string code;
        getline(cin, code);
        size_t pos = code.find("084");
        if (pos != string::npos) {
            code.erase(pos, 3);
        }
        cout << code << endl;
    }

    return 0;
}

