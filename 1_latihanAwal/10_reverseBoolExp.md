Template function memungkinkan kita untuk membuat fungsi yang dapat bekerja dengan berbagai tipe data. Dalam kode ini, kita menggunakan template function untuk membalik nilai boolean dan menangani tipe data selain boolean.

`std::enable_if` dan `std::is_same`
`std::enable_if` adalah template metaprogramming tool yang digunakan untuk mengaktifkan atau menonaktifkan fungsi berdasarkan kondisi tertentu. `std::is_same` adalah template yang digunakan untuk memeriksa apakah dua tipe data adalah sama.

## Fungsi `reverseBool` untuk Boolean:
```cpp
template <typename T>
typename enable_if<is_same<T, bool>::value, bool>::type reverseBool(T input) {
    return !input;
}
```
- `template <typename T>` : Mendeklarasikan fungsi template dengan tipe parameter `T`.
- `typename enable_if<is_same<T, bool>::value, bool>::type` : menggunakan `enable_if` untuk mengaktifkan fungsi ini hanya jika `T` adalah `bool`
- `return !input;` : Membalikan nilai boolean 

## Fungsi `reverseBool` untuk Tipe Data Selain Boolean: 
```cpp
template <typename T>
typename enable_if<!is_same<T, bool>::value, string>::type reverseBool(T input) {
    return "bukan boolean";
}
```

- `template <typename T>`: Mendeklarasikan fungsi template dengan tipe parameter `T`.
- `typename enable_if<!is_same<T, bool>::value, string>::type` : Menggunakan `enable_if` untuk mengaktifkan fungsi ini hanya jika `T` bukan `bool`.
- `return "bukan boolean";` : Mengembalikan string "bukan boolean".

## Fungsi `main`
```cpp
int main() {
    cout << boolalpha << reverseBool(true) << endl;         // Output: false
    cout << boolalpha << reverseBool(false) << endl;        // Output: true
    cout << reverseBool(42) << endl;                        // Output: bukan boolean
    cout << reverseBool("hello") << endl;                   // Output: bukan boolean
    return 0;
}
```

- c`out << boolalpha` : Mengatur cout untuk mencetak nilai boolean sebagai `true` atau `false` alih-alih `1` atau `0`.
- `reverseBool(true)` : Memanggil fungsi `reverseBool` dengan argumen `true`, yang akan membalik nilai boolean menjadi `false`.
- `reverseBool(42)` : Memanggil fungsi `reverseBool` dengan argumen `42`, yang akan mengembalikan string "bukan boolean" karena `42` bukan boolean.
- `reverseBool("hello")` : Memanggil fungsi `reverseBool` dengan argumen `"hello"`, yang akan mengembalikan string "bukan boolean" karena `"hello"` bukan boolean.

---

Kesimpulan
Kode ini menggunakan template function dan `std::enable_if` untuk membuat dua versi fungsi `reverseBool`: satu untuk membalik nilai boolean dan satu lagi untuk menangani tipe data selain boolean. Ini memungkinkan fungsi `reverseBool` untuk bekerja dengan berbagai tipe data dengan cara yang berbeda tergantung pada tipe data yang diberikan.