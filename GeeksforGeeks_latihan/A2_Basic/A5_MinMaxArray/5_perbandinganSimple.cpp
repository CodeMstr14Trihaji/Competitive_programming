// membuat program mencari nilai elemen array terbesar dan terkecil dengan metode perbandingan sederhana
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> arr[i];
    }

    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] < min){
            min = arr[i];
        }

        if (arr[i] > max){
            max = arr[i];
        }
    }

    cout << "Nilai minimum: " << min << endl;
    cout << "Nilai maksimum: " << max << endl;

    return 0;
}