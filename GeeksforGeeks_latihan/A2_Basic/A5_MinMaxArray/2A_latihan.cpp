#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a;
    cout << "Masukkan jumlah elemen: ";
    cin >> a;

    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> arr[i];
    }

    sort(arr, arr + a);
    cout << "Nilai minimum: " << arr[0] << endl;
    cout << "Nilai maksimum: " << arr[a-1] << endl;

    return 0;
}