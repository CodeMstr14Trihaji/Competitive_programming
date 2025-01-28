// Ini adalah metode hashing untuk menghitung frekuensi elemen dalam array
// Metode ini lebih efisien karena hanya melakukan perulangan sebanyak n kali

#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
	unordered_map<int, int> mp;

    // Melakukan perulangan sebanyak n kali
	for (int i = 0; i < n; i++)
		mp[arr[i]]++;
        // maksud dari mp[arr[i]]++ adalah menambahkan nilai dari key arr[i] sebanyak 1

	// maksud dari kode ini adalah menampilkan key dan value dari map
	for (auto x : mp)
		cout << x.first << " " << x.second << endl;
}

int main()
{
	int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
	int n = sizeof(arr) / sizeof(arr[0]);
	countFreq(arr, n);
	return 0;
}
