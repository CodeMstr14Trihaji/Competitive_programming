#include <iostream>
#include <vector>
using namespace std;

// function to reverse an array
void reverseArray(vector<int> &arr) {
    int n = arr.size();
    
    // Temporary array to store elements in reversed order
    vector<int> temp(n);
  
    // Copy elements from original array to temp in reverse order
    for(int i = 0; i < n; i++)
        temp[i] = arr[n - i - 1];
  
    // Copy elements back to original array
    for(int i = 0; i < n; i++)
        arr[i] = temp[i];
}

int main() {
    vector<int> arr = { 1, 4, 3, 2, 6, 5 };

    reverseArray(arr);
  
    for(int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
    return 0;
}

// kenapa kita menggunakan & pada argumen fungsi reverseArray?
// Karena kita ingin mengubah array asli, bukan membuat array baru.
// & menandakan bahwa kita mengirimkan referensi ke array, bukan salinannya.
// dengan bahasa yang lebih sederhana, artinya kita mengirimkan alamat memori array, bukan isi array.
// Jadi, ketika kita mengubah array di dalam fungsi, array asli juga berubah.
// Jika kita tidak menggunakan &, array asli tidak akan berubah.
// Jadi, kita menggunakan & agar array asli berubah.