#include <iostream>
#include <string>
using namespace std;

string isDivisibleBy5(const string& binary) {
    int remainder = 0;
    
    for (char bit : binary) {
        remainder = (remainder * 2 + (bit - '0')) % 5;
    }
    
    if (remainder == 0)
        return "Yes";
    else
        return "No";
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        string binary;
        cin >> binary;
        cout << isDivisibleBy5(binary) << endl;
    }
    
    return 0;
}

