#include <iostream>
#include <iomanip>  
using namespace std;


const string de101[15] = {"A", "B", "B", "A", "D", "C", "C", "A", "B", "D", "C", "C", "A", "B", "D"};
const string de102[15] = {"A", "C", "C", "A", "B", "C", "D", "D", "B", "B", "C", "D", "D", "B", "B"};
int main() {
    int T;
    cin >> T;  
    for (int i = 0; i < T; ++i) {
        int ma_de;
        string answers[15];            
        cin >> ma_de;
        for (int j = 0; j < 15; ++j) {
            cin >> answers[j];
        }
        int correct = 0;
        if (ma_de == 101) {
            for (int j = 0; j < 15; ++j) {
                if (answers[j] == de101[j]) {
                    ++correct;  
                }
            }
        } else if (ma_de == 102) {
            for (int j = 0; j < 15; ++j) {
                if (answers[j] == de102[j]) {
                    ++correct;  
                }
            }
        }        
        double score = (correct / 15.0) * 10;
        cout << fixed << setprecision(2) << score << endl;
    }
    return 0;
}

