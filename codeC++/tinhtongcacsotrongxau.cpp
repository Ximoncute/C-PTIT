#include <iostream>
#include <string>
using namespace std;


long long sumOfNumbersInString(const string& S) {
    long long sum = 0;
    long long currentNumber = 0;
    bool inNumber = false;

    for (char ch : S) {
        if (isdigit(ch)) {
            currentNumber = currentNumber * 10 + (ch - '0'); 
            inNumber = true;
        } else {
            if (inNumber) {
                sum += currentNumber;  
                currentNumber = 0;
                inNumber = false;
            }
        }
    }


    if (inNumber) {
        sum += currentNumber;
    }

    return sum;
}

int main() {
    int T;
    cin >> T;  
    cin.ignore();  

    while (T--) {
        string S;
        getline(cin, S); 


        cout << sumOfNumbersInString(S) << endl;
    }

    return 0;
}

