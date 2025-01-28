// C++ Program to reverse an array using Two Pointers

#include <iostream>
#include <vector>
using namespace std;

// function to reverse an array
void reverseArray(vector<int> &arr) {
  
    // Initialize left to the beginning and right to the end
    // dikurangi dengan 1, karena index array dimulai dari 0
    int left = 0, right = arr.size() - 1;
  
    // Iterate till left is less than right
    while(left < right) {
      
        // swap adalah fungsi bawaan C++ untuk menukar nilai
        // berasal  dari library <algorithm>
        // kita tidak mengincludenya karena sudah di include oleh <iostream>
        swap(arr[left], arr[right]);
      
        // Increment the left pointer
        left++;
      
        // Decrement the right pointer
        right--;
    }
}

int main() {
    vector<int> arr = { 1, 4, 3, 2, 6, 5 };

    reverseArray(arr);
  
    for(int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
    return 0;
}