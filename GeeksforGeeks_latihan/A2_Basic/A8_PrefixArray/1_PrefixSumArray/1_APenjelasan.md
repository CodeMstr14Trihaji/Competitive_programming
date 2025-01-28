# Prefix Sum Array – Implementasi dan Aplikasi dalam Pemrograman Kompetitif
Diberikan sebuah array arr[] berukuran N , carilah jumlah awalan dari array tersebut. Sebuah array dengan jumlah awalan adalah array prefixSum[] lain dengan ukuran yang sama, sehingga nilai prefixSum[i] adalah arr[0] + arr[1] + arr[2] . . . arr[i] .

Contoh: 

> Input: arr[] = {10, 20, 10, 5, 15} 
> Output: prefixSum[] = {10, 30, 40, 45, 60} 
> Penjelasan: Saat melintasi array, perbarui elemen dengan menambahkannya dengan elemen sebelumnya. 
> prefixSum[0] = 10,  
> prefixSum[1] = prefixSum[0] + arr[1] = 30,  
> prefixSum[2] = prefixSum[1] + arr[2] = 40 dan seterusnya.


Pendekatan: Untuk menyelesaikan masalah ikuti langkah-langkah berikut:

1. Nyatakan awalan array baruSum [] dengan ukuran yang sama dengan array input
2. Jalankan for loop untuk melintasi array input
3. Untuk setiap indeks tambahkan nilai elemen saat ini dan nilai sebelumnya dari array jumlah awalan

---
**Contoh Soal**
Pertimbangkan array berukuran N dengan semua nilai awal sebagai 0. Lakukan operasi penjumlahan 'm' yang diberikan dari indeks 'a' ke 'b' dan evaluasi elemen tertinggi dalam array. Operasi penjumlahan menambahkan 100 ke semua elemen dari a ke b (keduanya inklusif). 

Contoh:  

> Input: n = 5, m = 3  
> a = 2, b = 4. 
> a = 1, b = 3. 
> a = 1, b = 2. 
> Output: 300 
> Penjelasan: 
> Setelah operasi I – A[] = {0, 100, 100, 100, 0} Setelah 
> operasi II – A[] = {100, 200, 200, 100, 0} 
> Setelah operasi III – A[] = {200, 300, 200, 100, 0} 
> Elemen tertinggi: 300