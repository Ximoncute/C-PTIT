#include <iostream>
#include <vector>

using namespace std;


void generateCombinations(int start, int k, vector<int>& current, const vector<int>& elements) {

    if (current.size() == k) {
        for (int num : current) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }

    for (int i = start; i < elements.size(); i++) {
        current.push_back(elements[i]);        
        generateCombinations(i + 1, k, current, elements);
        current.pop_back();                    
    }
}

int main() {
    int n, k;


    cout << "Nhap so phan tu cua tap hop (n): ";
    cin >> n;
    cout << "Nhap so phan tu cua tap con (k): ";
    cin >> k;


    if (k > n || k <= 0 || n <= 0) {
        cout << "Gia tri k hoac n khong hop le!" << endl;
        return 1;
    }

    vector<int> elements(n); 


    cout << "Nhap cac phan tu cua tap hop: ";
    for (int i = 0; i < n; i++) {
        cin >> elements[i];
    }

    vector<int> current; 
    cout << "Cac tap con chon " << k << " phan tu la: " << endl;
    generateCombinations(0, k, current, elements); 

    return 0;
}

