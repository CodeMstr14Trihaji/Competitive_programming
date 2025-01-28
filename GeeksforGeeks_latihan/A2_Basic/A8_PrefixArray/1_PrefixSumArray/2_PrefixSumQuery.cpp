// Diberikan sebuah array arr[] berukuran N. Diberikan Q query dan pada setiap query diberikan L dan R, Cetak jumlah elemen array dari indeks L hingga R.


#include <bits/stdc++.h>
using namespace std;

// Maksud dari N adalah 1 * 10^5 + 10
const int N = 1e5 + 10;

// Maksud dari a[N] adalah array dengan elemen sebanyak N
int a[N];

// Maksud dari pf[N] adalah prefix array dengan elemen sebanyak N
int pf[N];


// Driver code
int main()
{
	int n = 6;
	int a[] = { 3, 6, 2, 8, 9, 2 };

	//Calculating prefix sum
	pf[0] = a[0];
	for (int i = 1; i < n; i++) {
		pf[i] = pf[i - 1] + a[i];
	}

	int q = 4;
	
    // membuat vector 2 dimensional dengan elemen sebanyak q
	vector<vector<int> > query
		= { { 2, 3 }, { 4, 6 }, { 1, 5 }, { 3, 6 } };
	
	//Printing sum from Queries
	for (int i = 0; i < q; i++) {
		int l = query[i][0], r = query[i][1];
		if (r > n || l < 1) {
			cout << "Please input in range 1 to " << n
				<< endl;
			continue;
		}
		if (l == 1)
			cout << pf[r - 1] << endl;
		else
			cout << pf[r - 1] - pf[l - 2] << endl;
	}
	return 0;
}
