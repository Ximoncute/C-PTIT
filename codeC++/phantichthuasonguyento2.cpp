#include <iostream>
#include <cmath>
using namespace std;

void primeFactors(int n) {

    if (n % 2 == 0) {
        int count = 0;
        while (n % 2 == 0) {
            n /= 2;
            count++;
        }
        cout << "2 " << count << endl;
    }


    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            int count = 0;
            while (n % i == 0) {
                n /= i;
                count++;
            }
            cout << i << " " << count << endl;
        }
    }


    if (n > 2) {
        cout << n << " 1" << endl;
    }
}

int main() {
    int n;
    cin >> n;  
    primeFactors(n);  
    return 0;
}

