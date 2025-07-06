#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    double x = 0;
    for (int i = 1; i <= n; i++) {
        x += 1.0 / i;
    }
    cout << fixed << setprecision(4) << x << endl;
    return 0;
}

