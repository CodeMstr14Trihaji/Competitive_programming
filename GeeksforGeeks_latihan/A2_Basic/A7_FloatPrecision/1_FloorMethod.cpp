/* Ekuivalen desimal dari 1/3 adalah 0,333333333333333…. Angka dengan panjang tak terhingga akan memerlukan memori tak terhingga untuk disimpan, dan biasanya kita memiliki 4 atau 8 byte. Oleh karena itu, angka floating point hanya menyimpan sejumlah digit signifikan tertentu, dan sisanya hilang. Ketepatan angka floating -point menentukan berapa banyak digit signifikan yang dapat direpresentasikannya tanpa kehilangan informasi. Saat mengeluarkan angka floating-point, cout memiliki ketepatan default 6 dan memotong apa pun setelah itu. Berikut ini adalah beberapa pustaka dan metode yang digunakan untuk memberikan ketepatan pada angka floating-point dalam C++: */

/* Floor membulatkan nilai yang diberikan ke bilangan bulat terdekat yang lebih kecil dari nilai yang diberikan. Nilai ini didefinisikan dalam berkas header <cmath> . */

#include <iostream>
#include <cmath>
using namespace std;

// Driver Code
int main()
{
	double x = 1.411, y = 1.500, z = 1.711;
	cout << floor(x) << endl;
	cout << floor(y) << endl;
	cout << floor(z) << endl;

	double a = -1.411, b = -1.500, c = -1.611;
	cout << floor(a) << endl;
	cout << floor(b) << endl;
	cout << floor(c) << endl;
	return 0;
}

