#include<bits/stdc++.h>
using namespace std;

// struct ini digunakan untuk mengembalikan dua nilai sekaligus
struct Pair 
{
    int min;
    int max;
}; 

Pair getMinMax(int arr[], int n){
    struct Pair minmax;     
    int i;
    
    // jika array hanya memiliki satu elemen, maka elemen tersebut adalah nilai minimum dan maksimum 
    if (n == 1){
        minmax.max = arr[0];
        minmax.min = arr[0];     
        return minmax;
    } 
    
    // jika array memiliki dua elemen, maka kita membandingkan kedua elemen tersebut
    if (arr[0] > arr[1]) {
        minmax.max = arr[0];
        minmax.min = arr[1];
    } else {
        minmax.max = arr[1];
        minmax.min = arr[0];
    } 
    
    //kenapa kita langsung mulai dari i=2? Karena kita sudah membandingkan elemen pertama dan kedua
    for(i = 2; i < n; i++){
        if (arr[i] > minmax.max)     
            minmax.max = arr[i];
            
        else if (arr[i] < minmax.min)     
            minmax.min = arr[i];
    }
    return minmax;
}

// Driver code
int main()
{
    int arr[] = { 1000, 11, 445,1, 330, 3000 };
    int arr_size = 6;
    
    struct Pair minmax = getMinMax(arr, arr_size);
    
    cout << "Minimum element is " << minmax.min << endl;
    cout << "Maximum element is " << minmax.max;
         
    return 0;
} 
