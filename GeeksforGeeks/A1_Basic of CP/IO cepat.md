# Metode Input/Output Cepat
Sering kali disarankan untuk menggunakan scanf/printf alih-alih cin/cout untuk input dan output yang cepat. Namun, Anda tetap dapat menggunakan cin/cout dan memperoleh kecepatan yang sama seperti scanf/printf dengan menyertakan dua baris berikut dalam fungsi main() Anda:
```cpp
ios_base::sync_with_stdio(false);
```
Fungsi ini mengaktifkan atau menonaktifkan sinkronisasi semua aliran standar C++ dengan aliran standar C yang sesuai jika fungsi ini dipanggil sebelum program melakukan operasi input atau output pertamanya. Menambahkan `ios_base::sync_with_stdio (false);` (yang bernilai true secara default) sebelum operasi I/O apa pun akan menghindari sinkronisasi ini. Fungsi ini merupakan anggota statis dari fungsi `std::ios_base`.

```cpp
cin.tie(NULL);
```
`tie()` adalah metode yang menjamin pembersihan `std::cout` sebelum `std::cin` menerima input. Ini berguna untuk program konsol interaktif yang mengharuskan konsol diperbarui secara konstan tetapi juga memperlambat program untuk I/O besar. Bagian NULL hanya mengembalikan pointer NULL.

Selain itu, Anda dapat menyertakan pustaka templat standar (STL) dengan satu penyertaan:
```cpp
#include <bits/stdc++.h>
```

Jadi templat Anda untuk pemrograman kompetitif bisa terlihat seperti ini:
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
```
Disarankan untuk menggunakan `cout << “\n”;` sebagai ganti `cout << endl;`. endl lebih lambat karena memaksa aliran pembilasan, yang biasanya tidak diperlukan. Tulis `\n` sebagai ganti endl.

Sekarang, berbicara tentang kontes kompetitif seperti ACM ICPC, Google CodeJam, TopCoder Open, berikut adalah kode eksklusif untuk membaca bilangan bulat dengan cara tercepat.

```cpp
void fastscan(int &number)
{
    //variable to indicate sign of input number
    bool negative = false;
    register int c;

    number = 0;

    // extract current character from buffer
    c = getchar();
    if (c=='-')
    {
        // number is negative
        negative = true;

        // extract the next character from the buffer
        c = getchar();
    }

    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;

    // if scanned input has a negative sign, negate the
    // value of the input number
    if (negative)
        number *= -1;
}

// Function Call
int main()
{
    int number;
    fastscan(number);
    cout << number << "\n";
    return 0;
}
```