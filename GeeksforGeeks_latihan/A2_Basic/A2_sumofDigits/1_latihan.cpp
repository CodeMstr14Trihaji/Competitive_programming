#include<iostream>
using namespace std;

int sumOfDigits(int n){
    int sum=0;
    while(n != 0){
        int last = n%10;
        sum+=last;
        n/= 10;
    }
    return sum;
}

int main(){
    int n;
    cout << "Masukan nilai n: ";
    cin >> n;

    cout << "Jumlah digit dari " << n << " adalah " << sumOfDigits(n) << endl;

    return  0;

}