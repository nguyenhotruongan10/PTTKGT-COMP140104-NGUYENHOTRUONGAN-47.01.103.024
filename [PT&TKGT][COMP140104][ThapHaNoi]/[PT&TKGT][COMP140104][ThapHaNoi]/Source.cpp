#include <iostream>
using namespace std;

void move(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        cout << "Chuyen dia 1" << source << " sang " << destination << endl;
        return;
    }

    move(n - 1, source, auxiliary, destination);
    cout << "Chuyen dia " << n << " tu " << source << " den " << destination << endl;
    move(n - 1, auxiliary, destination, source);
}

int main() {
    int n;
    cout << "Nhap so luong dia: ";
    cin >> n;

    move(n, 'A', 'C', 'B');
    return 0;
}
