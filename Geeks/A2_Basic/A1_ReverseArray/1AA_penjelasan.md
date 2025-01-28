# Reverse Array
Diberikan sebuah array `arr[]` , tugasnya adalah membalik array tersebut. Membalikkan array berarti menata ulang elemen-elemennya sehingga elemen pertama menjadi elemen terakhir , elemen kedua menjadi elemen kedua terakhir, dan seterusnya.

Contoh:

    Input: arr[] = {1, 4, 3, 2, 6, 5} 
    Output: {5, 6, 2, 3, 4, 1} 

Penjelasan: Elemen pertama 1 pindah ke posisi terakhir, elemen kedua 4 pindah ke posisi kedua terakhir dan seterusnya. 



    Input: arr[] = {4, 5, 1, 2} 
    Output: {2, 1, 5, 4} 

Penjelasan: Elemen pertama 4 pindah ke posisi terakhir, elemen kedua 5 pindah ke posisi kedua terakhir dan seterusnya.

## Macam teknik yang bisa digunakan
### 1. [Naive Approach] Using a temporary array – O(n) Time and O(n) Space
[Pendekatan Naif] Menggunakan array sementara – O(n) Waktu dan O(n) Ruang.

Idenya adalah menggunakan array sementara untuk menyimpan kebalikan dari array.

- Buat array sementara dengan ukuran yang sama dengan array asli.
- Sekarang, salin semua elemen dari array asli ke array sementara dalam urutan terbalik .
- Terakhir, salin semua elemen dari array sementara kembali ke array asli.

**Kompleksitas Waktu**: O(n), Menyalin elemen ke array baru adalah operasi linear.
**Ruang Tambahan**: O(n), karena kita menggunakan array tambahan untuk menyimpan array terbalik.
### 2. [Expected Approach – 1] Using Two Pointers – O(n) Time and O(1) Space
[Pendekatan yang Diharapkan – 1] Menggunakan Dua Pointer – O(n) Waktu dan O(1) Ruang.

Idenya adalah untuk mempertahankan dua penunjuk: kiri dan kanan , sedemikian rupa sehingga kiri menunjuk pada awal array dan kanan menunjuk pada akhir array.


Jika pointer kiri lebih kecil dari pointer kanan, tukar elemen pada kedua posisi ini. Setelah setiap pertukaran, tambah pointer kiri dan kurangi pointer kanan untuk bergerak ke arah tengah array. Ini akan menukar semua elemen di bagian pertama dengan elemen yang sesuai di bagian kedua.

**Kompleksitas Waktu**: O(n), karena kita mengunjungi setiap elemeWan tepat satu kali.
**Ruang Tambahan**: O(1)
### 3. [Expected Approach – 2] By Swapping Elements – O(n) Time and O(1) Space
[Pendekatan yang Diharapkan – 2] Dengan Menukar Elemen – O(n) ktu dan O(1) Ruang.

Idenya adalah untuk mengulang separuh pertama dari array dan menukar setiap elemen dengan elemen yang sesuai dari akhir . Jadi, saat mengulang separuh pertama, setiap elemen pada indeks i ditukar dengan elemen pada indeks (n – i – 1).

**Kompleksitas Waktu**: O(n), loop berjalan melalui setengah dari array, jadi bersifat linear terhadap ukuran array.
**Ruang Bantu**: O(1), tidak diperlukan ruang tambahan, oleh karena itu kita membalikkan array di tempat.
### 4. [Alternate Approach] Using Recursion – O(n) Time and O(n) Space
[Pendekatan Alternatif] Menggunakan Rekursi – O(n) Waktu dan O(n) Ruang

Idenya adalah menggunakan rekursi dan mendefinisikan fungsi rekursif yang mengambil serangkaian elemen array sebagai input dan membalikkannya. Di dalam fungsi rekursif,

Tukar elemen pertama dan terakhir.
Panggil fungsi dengan subarray yang tersisa secara rekursif.

**Kompleksitas Waktu**: O(n), relasi rekursifnya adalah T(n) = T(n – 2) + O(1) , yang dapat disederhanakan menjadi O(n).
**Ruang Bantu**: O(n), karena kita menggunakan tumpukan rekursi.

### 5. Using Inbuilt Methods – O(n) Time and O(1) Space
Menggunakan Metode Inbuilt – O(n) Waktu dan O(1) Ruang.

Idenya adalah menggunakan metode **reverse** bawaan yang tersedia di berbagai bahasa.

**Kompleksitas Waktu**: O(n), metode kebalikannya memiliki kompleksitas waktu linier.
**Ruang Bantu**: O(1) Ruang tambahan tidak digunakan untuk menyimpan array yang dibalik, karena metode array bawaan menukar nilai di tempatnya.