// membuat program reverse array dengan 5 macam metode
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 1. reverse array dengan bantuan array sementara
void reverseTempArray(vector<int> &arr){
    int n = arr.size();
    vector<int> temp(n);

    for(int i=0;i<n;i++){
        temp[i]=arr[n-i-1];
    }

    for(int i=0;i<n;i++){
        arr[i]= temp[i];
    }
}

// 2. reverse array dengan bantuan dua pointer
void reverseSwapArray(vector<int> & arr){
    int left=0, right=arr.size()-1;
    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}

// 3. reverse array dengan swapping element
void reverseSwapElemet(vector<int> & arr){
    int n= arr.size();

    for(int i=0;i<n/2;i++){
        swap(arr[i], arr[n-i-1]);
    }
}

// 4. rekursif array
void reverseRekursifBantu(vector<int>& arr, int kiri, int kanan){
    if(kiri >= kanan){
        return;
    }
    swap(arr[kiri],arr[kanan]);
    reverseRekursifBantu(arr, kiri+1,kanan-1);
}
void reverseRekur(vector<int>& arr){
    int n = arr.size();
    reverseRekursifBantu(arr, 0, n-1);
}

// 5. reverse array termudah, inbuild methods
void reverseInbuiltMethods(vector<int>& arr){
    reverse(arr.begin(), arr.end());
}


int main(){
    int n;
    cout << "Masukan banyak array: ";
    cin >> n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cout << "Array index ke-" << i<< ": ";
        cin >> arr[i];
    }

    // memanggil array fungsi reverseArray
    reverseTempArray(arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << "\n\n";


    for(int i=0;i<n;i++){
        cout << "Array index ke-" << i<< ": ";
        cin >> arr[i];
    }

    // memanggil array fungsi reverseswap
    reverseSwapArray(arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << "\n\n";

        for(int i=0;i<n;i++){
        cout << "Array index ke-" << i<< ": ";
        cin >> arr[i];
    }

    // memanggil array fungsi SwapElement
    reverseSwapArray(arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << "\n\n";

        for(int i=0;i<n;i++){
        cout << "Array index ke-" << i<< ": ";
        cin >> arr[i];
    }

    // memanggil array fungsi reverse rekursif
    reverseRekur(arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << "\n\n";

        for(int i=0;i<n;i++){
        cout << "Array index ke-" << i<< ": ";
        cin >> arr[i];
    }

    // memanggil array fungsi reverse inbuild methods
    reverseInbuiltMethods(arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << "\n\n";

    return 0;
}