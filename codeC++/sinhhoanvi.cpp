#include <iostream>
#include <algorithm>  

using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    do {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } while (next_permutation(arr, arr + n));

    return 0;
}

