#include<iostream>
using namespace std;

bool existHigherNumber(int arr[], int n){
    // Asumsikan ukuran array sudah diketahui dan disesuaikan di main
    for(int i = 0; i < n; i++){
        if(arr[i] >= n){
            return true;
        } 
    }
    return false;
}

// Informasi: Ketika array dilewatkan ke fungsi, ia diperlakukan sebagai pointer, sehingga sizeof(arr) akan mengembalikan ukuran pointer, bukan ukuran array. 

int main(){
    int arr[] = {10, 18, 2, 8, 16, 40};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    bool val = existHigherNumber(arr, arrSize);

    if(val){
        cout << "Ada angka yang lebih besar atau sama dengan 10." << endl;
    } else {
        cout << "Tidak ada angka yang lebih besar dari 10" << endl;
    }

    return 0;
}