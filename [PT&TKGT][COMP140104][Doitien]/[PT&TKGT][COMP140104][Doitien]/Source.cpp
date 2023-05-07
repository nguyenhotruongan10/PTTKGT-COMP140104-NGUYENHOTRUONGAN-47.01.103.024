#include <iostream>
using namespace std;

int main()
{
    // Nhập số tiền VNĐ
    int vnd;
    cout << "Nhap so tien VND can doi: ";
    cin >> vnd;

    // Tính số tờ tiền mỗi mệnh giá
    int count500000 = vnd / 500000;
    vnd %= 500000;
    int count200000 = vnd / 200000;
    vnd %= 200000;
    int count100000 = vnd / 100000;
    vnd %= 100000;
    int count50000 = vnd / 50000;
    vnd %= 50000;
    int count20000 = vnd / 20000;
    vnd %= 20000;
    int count10000 = vnd / 10000;
    vnd %= 10000;
    int count5000 = vnd / 5000;
    vnd %= 5000;
    int count2000 = vnd / 2000;
    vnd %= 2000;
    int count1000 = vnd / 1000;
    vnd %= 1000;

    // In ra số tờ tiền từng mệnh giá
    cout << "So to tien 500,000 VND: " << count500000 << endl;
    cout << "So to tien 200,000 VND: " << count200000 << endl;
    cout << "So to tien 100,000 VND: " << count100000 << endl;
    cout << "So to tien 50,000 VND: " << count50000 << endl;
    cout << "So to tien 20,000 VND: " << count20000 << endl;
    cout << "So to tien 10,000 VND: " << count10000 << endl;
    cout << "So to tien 5,000 VND: " << count5000 << endl;
    cout << "So to tien 2,000 VND: " << count2000 << endl;
    cout << "So to tien 1,000 VND: " << count1000 << endl;
    return 0;
}
