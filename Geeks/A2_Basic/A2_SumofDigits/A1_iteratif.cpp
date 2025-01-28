// Iterative C++ Code to find sum of digits

#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {

        // Extract the last digit
        int last = n % 10;

        // Add last digit to sum
        sum += last;

        // Remove the last digit
        n /= 10;
    }
    return sum;
}

// kenapa dibagi dengan 10?
// karena setiap iterasi, kita mengambil digit terakhir dari n dan menambahkannya ke sum.
// kemudian kita menghapus digit terakhir dari n dengan membaginya dengan 10.
// proses ini berlanjut sampai n menjadi 0.

int main() {
    int n = 12345;
    cout << sumOfDigits(n) << "\n";

    int m = 10304;
    cout << sumOfDigits(m);
    return 0;
}