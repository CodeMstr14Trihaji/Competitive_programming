#include <bits/stdc++.h>
using namespace std;

// 1. Menggunakan pembalikan string (mirip strcmp)
bool isPalindromeReverse(const string& str) {
    string reversedStr = str;            // Salin string ke variabel baru
    reverse(reversedStr.begin(), reversedStr.end()); // Balik string
    return str == reversedStr;           // Bandingkan string asli dengan yang dibalik
}

// 2. Menggunakan dua pointer
bool isPalindromePointer(const string& str) {
    int kiri = 0, kanan = str.size() - 1; // Pointer ke awal dan akhir string
    while (kiri < kanan) {
        if (str[kiri] != str[kanan]) {
            return false; // Jika ada perbedaan, bukan palindrome
        }
        kiri++;
        kanan--;
    }
    return true; // Jika semua sama, maka palindrome
}

// 3. Menggunakan rekursi
bool isPalindromeRecursive(const string& str, int kiri, int kanan) {
    if (kiri >= kanan) {
        return true; // Basis: jika pointer bertemu atau melewati, berarti palindrome
    }
    if (str[kiri] != str[kanan]) {
        return false; // Jika ada perbedaan, bukan palindrome
    }
    return isPalindromeRecursive(str, kiri + 1, kanan - 1); // Periksa bagian dalam string
}

int main() {
    string input;
    cout << "Masukkan kata: ";
    cin >> input;

    // Cara 1: Menggunakan pembalikan string
    if (isPalindromeReverse(input)) {
        cout << "Palindrome (dengan reverse)\n";
    } else {
        cout << "Bukan palindrome (dengan reverse)\n";
    }

    // Cara 2: Menggunakan dua pointer
    if (isPalindromePointer(input)) {
        cout << "Palindrome (dengan pointer)\n";
    } else {
        cout << "Bukan palindrome (dengan pointer)\n";
    }

    // Cara 3: Menggunakan rekursi
    if (isPalindromeRecursive(input, 0, input.size() - 1)) {
        cout << "Palindrome (dengan rekursi)\n";
    } else {
        cout << "Bukan palindrome (dengan rekursi)\n";
    }

    return 0;
}
