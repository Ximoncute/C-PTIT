#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore(); 
    
    while (T--) {
        string S;
        getline(cin, S); 

        istringstream iss(S);
        int wordCount = 0;
        string word;

        while (iss >> word) {
            wordCount++;
        }

        cout << wordCount << endl;
    }

    return 0;
}

