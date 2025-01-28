// latihan membuat program membalik atau reverse array
#include<bits/stdc++.h>
using namespace std;

// 1. reverse array array sementara
void reverseTemp(vector<int>& arr){
    int n= arr.size();
    vector<int> temp(n);
    for(int i=0;i<n;i++){
        temp[i]=arr[n-i-1];
    }
    for(int i=0;i<n;i++){
        arr[i] = temp[i];
    }
}

// 2. reverse array dua poiinter
void reversePointer(vector<int>& arr){
    int kiri=0,kanan=arr.size()-1;
    while(kiri<kanan){
        swap(arr[kiri],arr[kanan]);
        kiri++;
        kanan--;
    }
}

// 3. reverse array swap element
void reverseSwap(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
}

// 4. fungsi reverse rekursif
void reverseBantu(vector<int>& arr, int kiri, int kanan){
    if(kiri>=kanan){
        return;
    }
    swap(arr[kiri],arr[kanan]);
    reverseBantu(arr, kiri+1, kanan-1);
}
void reverseRekur(vector<int>&arr){
    int n=arr.size();
    reverseBantu(arr,0,n-1);
}

// 5. reverse inbuilt methods
void reverseInbuilt(vector<int>&arr){
    reverse(arr.begin(),arr.end());
}

int main(){
    int n,m;
    cout << "Masukan banyak array: ";
    cin >> n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cout << "Masukan indeks array ke-" << i << ": ";
        cin >> arr[i];
    }
    
    // fungsi pertama
    reverseTemp(arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << "\n\n";

    // fungsi kedua
    reversePointer(arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << "\n\n";

    // fungsi ketiga
    reverseSwap(arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << "\n\n";

    // fungsi keempat
    reverseRekur(arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << "\n\n";

    // fungsi kelimat
    reverseInbuilt(arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << "\n\n";

    return 0;
}