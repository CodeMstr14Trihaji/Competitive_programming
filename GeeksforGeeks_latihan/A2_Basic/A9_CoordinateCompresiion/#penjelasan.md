# Mengubah Array ke bentuk tereduksi menggunakan Hashing
Diberikan sebuah array dengan N elemen berbeda, ubah array yang diberikan ke dalam bentuk di mana semua elemen berada dalam rentang dari 0 hingga N-1. Urutan elemennya sama, yaitu, 0 ditempatkan di tempat elemen terkecil, 1 ditempatkan untuk elemen terkecil kedua, … N-1 ditempatkan untuk elemen terbesar. 

**Contoh:**

> Masukan:   arr[] = {10, 40, 20} 
> Keluaran: arr[] = {0, 2, 1}
> Masukan:   arr[] = {5, 10, 40, 30, 20} 
> Keluaran: arr[] = {0, 1, 4, 3, 2}

Pendekatan Naif:

Solusi sederhananya adalah dengan terlebih dahulu menemukan elemen minimum, menggantinya dengan 0, mempertimbangkan array yang tersisa dan menemukan minimum dalam array yang tersisa dan menggantinya dengan 1, dan seterusnya.

- Ulangi array
    - Temukan elemen minimum dan pertahankan posisi kemunculannya.
    - Perbarui hasil pada elemen indeks minimum dengan Posisi baru
    - Tambahkan posisi baru sebesar 1.
    - Perbarui elemen asli pada elemen minimum saat ini dengan nilai maksimum yang mungkin, sehingga tidak akan menjadi minimum dalam iterasi selanjutnya
- Kembalikan hasilnya

---
## Pendekatan yang Efisien:

Idenya adalah mengurutkan array yang diberikan dan menggunakan peta tak berurutan untuk menyimpan bentuk tereduksi dari setiap nilai array, lalu memperbarui keseluruhan array ke bentuk tereduksi menggunakan nilai dari peta tak berurutan.


Ikuti langkah-langkah berikut untuk mengimplementasikan ide tersebut: 

- Buat array temp dan salin konten array yang diberikan ke temp[]. 
- Urutkan temp[] dalam urutan menaik. 
- Buat tabel hash kosong.  
- Lintasi temp[] dari kiri ke kanan dan simpan pemetaan angka dan nilainya (dalam array yang dikonversi) dalam tabel hash. 
- Lintasi array yang diberikan dan ubah elemen ke posisinya menggunakan tabel hash. 

## Menggunakan priority_queue dan hashmap:

Idenya adalah mengurutkan array yang diberikan menggunakan priority_queue alih-alih memanggil sort stl dan menggunakan peta tak berurutan untuk menyimpan bentuk tereduksi dari setiap nilai array, lalu memperbarui keseluruhan array ke bentuk tereduksi menggunakan nilai dari peta tak berurutan.

Algoritma:

- Buat priority_queue pq untuk mendapatkan versi arr yang diurutkan dalam urutan menaik.
- Dorong nilai arr ke antrean prioritas.
- Buat array temp dan salin konten priority_queue ke temp[]. 
- Buat tabel hash kosong.  
- Lintasi temp[] dari kiri ke kanan dan simpan pemetaan angka dan nilainya (dalam array yang dikonversi) dalam tabel hash. 
- Lintasi array yang diberikan dan ubah elemen ke posisinya menggunakan tabel hash.