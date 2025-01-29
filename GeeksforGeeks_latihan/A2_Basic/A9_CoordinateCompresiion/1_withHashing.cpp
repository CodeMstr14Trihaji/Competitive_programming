// C++ program to convert an array in reduced
// form
#include <bits/stdc++.h>
using namespace std;

vector<int> convert(vector<int>& arr)
{
	int n = arr.size();
	vector<int> result(n);
	int currPos = 0;

	// Iterate over the array
	for (int i = 0; i < n; i++) {
		int minn = INT_MAX;
		int idx = -1;

		// Find the minimum element and keep
		// its position of occurrence
		for (int j = 0; j < n; j++) {
			if (minn > arr[j]) {
				minn = arr[j];
				idx = j;
			}
		}

		// Update the result at minimum index element
		// with new Position
		result[idx] = currPos;

		// Increment the new position
		currPos++;

		// Update the original element at current minimum
		// element with maximum value possible, so that it
		// won't be minimum in further iteration
		arr[idx] = INT_MAX;
	}

	// Return the result
	return result;
}

void printArr(vector<int>& arr)
{
	for (auto i : arr) {
		cout << i << " ";
	}
}

// Driver program to test above method
int main()
{
	vector<int> arr = { 10, 20, 15, 12, 11, 50 };
	int n = arr.size();

	cout << "Given Array is \n";
	printArr(arr);

	vector<int> result = convert(arr);

	cout << "\n\nConverted Array is \n";
	printArr(result);

	return 0;
}
