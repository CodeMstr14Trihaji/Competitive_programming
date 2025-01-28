#include <iostream>
#include <limits.h>
using namespace std;

int setmini(int A[], int N){
    // kita membuat variabel mini dengan nilai maksimum
    // nilai maksimum adalah nilai yang paling besar yang bisa diwakili oleh tipe data integer
    // nilai ini digunakan untuk membandingkan dengan elemen-elemen array
    // INT_MAX adalah konstanta yang didefinisikan dalam header <limits.h>
    // konstanta ini merepresentasikan nilai maksimum yang bisa diwakili oleh tipe data integer
    int mini = INT_MAX;
    for (int i = 0; i < N; i++) {
        if (A[i] < mini) {
            mini = A[i];
        }
    }
    return mini;
}

int setmaxi(int A[], int N){
    int maxi = INT_MIN;

    for (int i = 0; i < N; i++) {
        if (A[i] > maxi) {
            maxi = A[i];
        }
    }
    return maxi;
}

int main()
{
    int A[] = { 4, 9, 6, 5, 2, 3 };
    int N= sizeof(A)/sizeof(A[0]);
    cout <<"Minimum element is: " <<setmini(A, N) << endl;
    cout <<"Miximum  element is: "<< setmaxi(A, N) << endl;
}