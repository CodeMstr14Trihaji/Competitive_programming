// C++ program to convert an array in reduced
// form

#include <bits/stdc++.h>
using namespace std;

// Function to convert an array in reduced
// form
void convert(int arr[], int n) {
	// Create a temp array and copy contents
	// of arr[] to temp
	int temp[n];
	memcpy(temp, arr, n*sizeof(int));
	
	// prioirty queue to get array sorted 
	// in increasing order
	priority_queue<int, vector<int>, greater<int>> pq;

	for( int i = 0; i < n; i++)
	pq.push( arr[i] );
	
	int i = 0;

	// taking elements from priority queue
	// to temp array
	while(!pq.empty()) {
	temp[i++] = pq.top();
	pq.pop();
	}
	
	// Create a hash table. Refer
	// http://tinyurl.com/zp5wgef
	unordered_map<int, int> umap;

	// One by one insert elements of sorted
	// temp[] and assign them values from 0
	// to n-1
	int val = 0;
	for (int i = 0; i < n; i++)
		umap[temp[i]] = val++;

	// Convert array by taking positions from
	// umap
	for (int i = 0; i < n; i++)
		arr[i] = umap[arr[i]];
}

void printArr(int arr[], int n)
{
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";
}

// Driver program to test above method
int main()
{
	int arr[] = {10, 20, 15, 12, 11, 50};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Given Array is \n";
	printArr(arr, n);

	convert(arr , n);

	cout << "\n\nConverted Array is \n";
	printArr(arr, n);

	return 0;
}
