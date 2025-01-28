#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = { 12, 3, 4, 15 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum of given array is " << accumulate(arr, arr + n, 0);
    return 0;
}

// fungsi accumulate berasal dari header <numeric> yang digunakan untuk menghitung jumlah elemen dalam array.
// fungsi ini memiliki tiga parameter:
// 1. pointer ke elemen pertama dalam array
// 2. pointer ke elemen terakhir dalam array
// 3. nilai awal dari variabel sum