#include <iostream>
using namespace std;


int tinhSoMu(int N, int p) {
    int soMu = 0;
    long long luyThuaP = p;
 
    while (luyThuaP <= N) {
        soMu += N / luyThuaP;
        luyThuaP *= p;
    }
    
    return soMu;
}

int main() {
    int T;
    cin >> T; 
    
    while (T--) {
        int N, p;
        cin >> N >> p; 
        
        int ketQua = tinhSoMu(N, p);
        
 
        cout << ketQua << endl;
    }
    
    return 0;
}

