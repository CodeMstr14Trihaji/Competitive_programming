/* Setprecision bila digunakan bersama dengan 'fixed' memberikan presisi pada angka floating-point yang benar terhadap angka desimal yang disebutkan dalam tanda kurung setprecision. Presisi didefinisikan dalam berkas header <iomanip>. */

// C++ program to demonstrate
// working of setprecision()
// in C/C++
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
	double pi = 3.14159, npi = -3.14159;
	cout << fixed << setprecision(0) << pi << " " << npi
		<< endl;
	cout << fixed << setprecision(1) << pi << " " << npi
		<< endl;
	cout << fixed << setprecision(2) << pi << " " << npi
		<< endl;
	cout << fixed << setprecision(3) << pi << " " << npi
		<< endl;
	cout << fixed << setprecision(4) << pi << " " << npi
		<< endl;
	cout << fixed << setprecision(5) << pi << " " << npi
		<< endl;
	cout << fixed << setprecision(6) << pi << " " << npi
		<< endl;
	return 0;
}

// dengan bahasa yang sederhana, setprecision() digunakan untuk menentukan jumlah digit yang akan ditampilkan setelah titik desimal.

/* Catatan: Bila nilai yang disebutkan dalam setprecision() melebihi jumlah digit titik mengambang dalam angka asli, maka 0 ditambahkan ke digit titik mengambang agar sesuai dengan presisi yang disebutkan oleh pengguna. */
