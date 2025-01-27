#include <iostream>
#include <type_traits>
#include <string>

using namespace std;

// Fungsi untuk membalik nilai boolean
template <typename T>
typename enable_if<is_same<T, bool>::value, bool>::type reverseBool(T input) {
    return !input;
}

// Fungsi untuk menangani tipe data selain boolean
template <typename T>
typename enable_if<!is_same<T, bool>::value, string>::type reverseBool(T input) {
    return "bukan boolean";
}

int main() {
    // Contoh Input dan Output
    cout << boolalpha << reverseBool(true) << endl;         // Output: false
    cout << boolalpha << reverseBool(false) << endl;        // Output: true
    cout << reverseBool(42) << endl;                        // Output: bukan boolean
    cout << reverseBool("hello") << endl;                   // Output: bukan boolean
    return 0;
}
