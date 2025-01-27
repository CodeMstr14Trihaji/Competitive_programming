#include <iostream>
using namespace std;

int* additiveInverse(const int arr[], int size) {
    // Alokasi array dinamis untuk hasil
    int* hasil = new int[size];

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            int temp = arr[i] * 2;
            hasil[i] = arr[i] - temp;
        } else {
            int temp = arr[i] * -2;
            hasil[i] = temp + arr[i];
        }
    }

    // cek isi array hasil
    for (int i = 0; i < size; i++) {
        cout << hasil[i] << " ";
    }
    cout << endl;

    return hasil;
}

int main() {
    int arr[] = {12, 14, -23, 0, 9, -7, -34};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* hasil = additiveInverse(arr, size);

    // Jangan lupa untuk menghapus alokasi dinamis
    delete[] hasil;

    return 0;
}
