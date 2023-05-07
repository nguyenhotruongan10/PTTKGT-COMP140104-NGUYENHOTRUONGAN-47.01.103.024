#include <iostream>
using namespace std;

const int MAX = 100;

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int m, n, p;

    // Nhập kích thước ma trận A và B
    cout << "Nhap kich thuoc ma tran A: ";
    cin >> m >> n;

    cout << "Nhap kich thuoc ma tran B: ";
    cin >> n >> p;

    // Nhập giá trị cho ma trận A
    cout << "Nhap ma tran A:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // Nhập giá trị cho ma trận B
    cout << "Nhap ma tran B:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cin >> B[i][j];
        }
    }

    // Tính tích hai ma trận
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // In ma trận kết quả C
    cout << "Ma tran C la:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
