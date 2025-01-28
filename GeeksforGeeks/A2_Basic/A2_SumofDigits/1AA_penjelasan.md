# Program penjumlahan digit suatu angka
Diberikan suatu bilangan n , tentukanlah jumlah digit-digitnya.

Contoh : 

> Input: n = 687 
> Output: 21 
> Penjelasan: Jumlah digitnya adalah: 6 + 8 + 7 = 21


> Input: n = 12 
> Output: 3 
> Penjelasan: Jumlah digitnya adalah: 1 + 2 = 3

## Daftar Penyelesaian
### 1. Pendekatan Iteratif
Idenya adalah menambahkan digit mulai dari digit paling kanan (paling tidak signifikan) dan bergerak ke digit paling kiri (paling signifikan). Ini dapat dilakukan dengan mengekstrak digit terakhir dari angka berulang kali menggunakan operasi modulo 10, menambahkannya ke jumlah , dan kemudian menghilangkannya menggunakan pembagian integer dengan 10. Misalnya: n = 1567, maka 1567 / 10 = 156,7 = 156 (Pembagian Integer). 

**Kompleksitas Waktu**: O(log 10 n), karena kita mengulang semua digit.
**Ruang Bantu**: O(1)

### 2. Pendekatan Rekursif
Kita juga dapat menggunakan rekursi untuk menemukan jumlah digit. Idenya adalah mengekstrak digit terakhir , menambahkannya ke jumlah, dan secara rekursif memanggil fungsi dengan angka yang tersisa (setelah menghapus digit terakhir).


Kasus Dasar: Jika angkanya 0, kembalikan 0.
Kasus Rekursif: Ekstrak digit terakhir dan tambahkan ke hasil panggilan rekursif dengan n / 10.

**Kompleksitas Waktu**: O(log 10 n), karena kita mengulang semua digit.
**Ruang Bantu**: O(log 10 n) karena tumpukan pemanggilan fungsi.

### 3. Mengambil nomor input sebagai string
Idenya adalah mengambil angka input sebagai string lalu mengulangi semua karakter (digit) untuk menemukan jumlah digit. Untuk menemukan nilai sebenarnya dari digit dari karakter, kurangi nilai ASCII '0' dari karakter.


Pendekatan ini digunakan ketika angka input begitu besar sehingga tidak dapat disimpan dalam tipe data integer.

**Kompleksitas Waktu**: O(len(s)), karena kita mengulang semua karakter (digit).
**Ruang Bantu**: O(1)