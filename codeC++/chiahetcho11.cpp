#include <iostream>
#include <string>
using namespace std;

int isDivisibleBy11(const string &N) {
    int oddSum = 0, evenSum = 0;
    
    for (int i = 0; i < N.length(); i++) {
        if (i % 2 == 0) {
            oddSum += N[i] - '0'; 
        } else {
            evenSum += N[i] - '0'; 
        }
    }
    
    if ((oddSum - evenSum) % 11 == 0) {
        return 1;  
    }
    
    return 0;  
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        string N;
        cin >> N;
        cout << isDivisibleBy11(N) << endl;
    }
    
    return 0;
}

