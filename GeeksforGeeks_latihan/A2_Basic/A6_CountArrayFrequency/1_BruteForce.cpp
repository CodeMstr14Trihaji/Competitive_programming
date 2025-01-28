#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n){
	
    // maksud dari (n, false) adalah membuat vector dengan n elemen dan semua elemen tersebut diisi dengan false
	vector<bool> visited(n, false);

    // Lalu kita lakukan perulangan sebanyak n kali
	for (int i = 0; i < n; i++) {

		// skip elemen yang sudah dihitung
		if (visited[i] == true)
			continue;

		// Count frequency
		int count = 1;

		// hitung frekuensi elemen yang sama dengan elemen ke-i
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) {
				visited[j] = true;
				count++;
			}
		}
		cout << arr[i] << " " << count << endl;
	}
}

int main()
{
	int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
	int n = sizeof(arr) / sizeof(arr[0]);
	countFreq(arr, n);
	return 0;
}
