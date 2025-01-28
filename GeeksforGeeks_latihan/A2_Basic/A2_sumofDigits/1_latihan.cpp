#include<iostream>
using namespace std;

// 1. dengan menggunakan pendekatan iteratif
int sumOfDigitsIteratif(int n){
    int sum=0;
    while(n != 0){
        int last = n%10;
        sum+=last;
        n/= 10;
    }
    return sum;
}

// 2. dengan menggunakan pendekatan rekursif
int sumOfDigitsRekursif(int n) {

    if (n == 0)
        return 0;

    return (n % 10) + sumOfDigitsRekursif(n / 10);
}

// 3. inputan diperlakukan sebagai string
// kelebihan: bisa menangani inputan yang besar
int sumOfDigitsString(string &s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
      
        // Extract digit from character
        int digit = s[i] - '0';
      
        // Add digit to the sum
        sum = sum + digit;
    }
    return sum;
}

int main(){
    int n;
    cout << "Masukan nilai n: ";
    cin >> n;

    cout << "Jumlah digit dari pendekatan iteratif " << n << " adalah " << sumOfDigitsIteratif(n) << endl;
    cout << "Jumlah digit dari pendekatan rekursif " << n << " adalah " << sumOfDigitsRekursif(n) << endl;

    string s;
    cout << "Masukan nilai s: ";
    cin >> s;
    cout << "Jumlah digit dari pendekatan string " << s << " adalah " << sumOfDigitsString(s) << endl;

    return  0;

}