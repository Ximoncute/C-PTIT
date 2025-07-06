#include <iostream>
#include <cmath>

using namespace std;


bool laSoSphenic(int N) {
    int demUocNguyenTo = 0; 
    int tichNguyenTo = 1;   
    
 
    for (int i = 2; i <= sqrt(N); i++) {
        int dem = 0;
        while (N % i == 0) {
            N /= i;
            dem++;
        }
        if (dem > 0) {
            demUocNguyenTo++; 
            tichNguyenTo *= i;
        }
        if (dem > 1) {
            return false; 
        }
    }
    

    if (N > 1) {
        demUocNguyenTo++;
        tichNguyenTo *= N;
    }
    

    return (demUocNguyenTo == 3);
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N; 

        if (laSoSphenic(N)) {
            cout << 1 << endl; 
        } else {
            cout << 0 << endl; 
        }
    }
    
    return 0;
}

