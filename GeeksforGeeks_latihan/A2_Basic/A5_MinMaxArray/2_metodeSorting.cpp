#include <bits/stdc++.h>
using namespace std;

struct Pair {
    int min;
    int max;
};

Pair getMinMax(int arr[], int n){
    Pair minmax; // deklarasi struct Pair

    // fungsi sort berasal dari header <algorithm>
    // yang berguna untuk mengurutkan elemen-elemen array, yang dimulai dari elemen pertama hingga elemen terakhir
    // pengurutan dilakukan dalam urutan non-decreasing (ascending), dari nilai terkecil hingga terbesar.
    // sehingga kita bisa langsung menemukan nilai minimum dan maksimum dari array yang sudah diurutkan.

    // sort memiliki dua parameter:
    // 1. pointer ke elemen pertama dalam array
    // 2. pointer ke elemen terakhir dalam array

    sort(arr, arr + n);

    minmax.min = arr[0];
    minmax.max = arr[n - 1];

    return minmax;
}

int main()
{
    int arr[] = { 1000, 11, 445, 1, 330, 3000 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    Pair minmax = getMinMax(arr, arr_size);

    cout << "Minimum element is " << minmax.min << endl;
    cout << "Maximum element is " << minmax.max << endl;

    return 0;
}
