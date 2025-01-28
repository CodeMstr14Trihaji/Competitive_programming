// Implementasi C++ dari pendekatan ini
#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{ 
	sort(arr,arr+n);//sort array for binary search
	
	for(int i = 0 ; i < n ;i++){ 
    // indeks dari kemunculan pertama dan terakhir arr[i]
	int first_index = lower_bound(arr,arr+n,arr[i])- arr;
	int last_index = upper_bound(arr,arr+n,arr[i])- arr-1;
	i=last_index;

    // fungsi lower_bound() mengembalikan iterator ke elemen pertama 
    // yang lebih besar atau sama dengan arr[i].

    // Sedangkan fungsi upper_bound() mengembalikan iterator ke elemen pertama
    // yang lebih besar dari arr[i].

    // fungsi ini berasal dari header file <algorithm>
	
	int fre=last_index-first_index+1;
	cout << arr[i] <<" "<<fre <<endl;
	} 
}
// dari beberapa metode, metode ini adalah yang paling efisien

// Drive code
int main()
{ 
	int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function call
	countFreq(arr, n);
	return 0;
	
}

