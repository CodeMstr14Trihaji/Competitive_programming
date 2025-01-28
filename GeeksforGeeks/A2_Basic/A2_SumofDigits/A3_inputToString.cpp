// C++ Code to find the sum of digits by
// taking the input number as string

#include <iostream>
using namespace std;

int sumOfDigits(string &s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
      
        // Extract digit from character
        int digit = s[i] - '0';
        // apa maksud dari kode diatas ini?
        // maksudnya adalah mengubah karakter menjadi angka.
        // caranya adalah dengan mengurangkan karakter dengan karakter '0'.
        // kenapa '0'? karena karakter '0' memiliki nilai ASCII 48. Sehingga karakter angka yang dikurangi dengan 48, akan menghasilkan angka yang sesuai.

        // misal karakter '5' - '0' = 5
        // ini karena karakter '5' memiliki nilai ASCII 53. Sehingga 53 - 48 = 5.

        // Add digit to the sum
        sum = sum + digit;
    }
    return sum;
}

int main() {
    string s = "123456789123456789123422";

    cout << sumOfDigits(s);
    return 0;
}