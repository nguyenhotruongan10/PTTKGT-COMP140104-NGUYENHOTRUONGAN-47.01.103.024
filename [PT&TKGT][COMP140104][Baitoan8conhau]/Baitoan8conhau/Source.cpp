#include <iostream>
#include <vector>
using namespace std;

class Board {
private:
    const int N = 8;
    vector<int> cols;

public:
    Board() {
        cols = vector<int>(N, -1);
    }

    void print() const {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (cols[j] == i) cout << "Q ";
                else cout << ". ";
            }
            cout << endl;
        }
        cout << endl;
    }

    bool isValid(int row, int col) const {
        for (int i = 0; i < col; i++) {
            
            if (cols[i] == row) return false;
            if (cols[i] - i == row - col) return false;
            if (cols[i] + i == row + col) return false; 
        }
        return true;
    }

    void solve(int col) {
        if (col == N) {
            print();
            return;
        }
        for (int row = 0; row < N; row++) {
            if (isValid(row, col)) {
                cols[col] = row;
                solve(col + 1); 
            }
        }
    }
};

int main() {
    Board b;
    b.solve(0);
    return 0;
}
