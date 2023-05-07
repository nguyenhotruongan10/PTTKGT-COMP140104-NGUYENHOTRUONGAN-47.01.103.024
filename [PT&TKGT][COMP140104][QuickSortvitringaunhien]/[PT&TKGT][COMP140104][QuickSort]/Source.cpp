#include <iostream>
using namespace std;

void quicksort(int arr[], int left, int right) {
    if (left >= right) return;
    int pivot = arr[left + rand() % (right - left + 1)]; // chọn pivot ngẫu nhiên
    int i = left, j = right;
    while (i <= j) {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    quicksort(arr, left, j);
    quicksort(arr, i, right);
}

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int* arr = new int[n]; // cấp phát động cho mảng arr
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quicksort(arr, 0, n - 1);

    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // giải phóng bộ nhớ đã cấp phát
    return 0;
}
