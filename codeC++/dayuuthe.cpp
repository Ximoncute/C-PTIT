#include <iostream>
#include <vector>
using namespace std;


string kiem_tra_uu_the(const vector<int>& A) {
    int so_luong = A.size();
    int so_chan = 0;
    int so_le = 0;


    for (int num : A) {
        if (num % 2 == 0) {
            so_chan++;
        } else {
            so_le++;
        }
    }


    if (so_luong % 2 == 0) { 
        if (so_chan > so_le) {
            return "YES";
        }
    } else { 
        if (so_le > so_chan) {
            return "YES";
        }
    }

    return "NO";
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); 

    while (T--) {
        vector<int> A;
        int num;

        while (cin >> num) {
            A.push_back(num);
            if (cin.peek() == '\n' || cin.peek() == EOF) {
                break;
            }
        }
        cout << kiem_tra_uu_the(A) << endl;
    }

    return 0;
}

