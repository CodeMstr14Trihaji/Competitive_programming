// Program CPP untuk menghitung frekuensi elemen array
#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
    unordered_map<int, int> mp;

    // Melalui elemen-elemen array dan
    // menghitung frekuensi
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    // Untuk mencetak elemen sesuai dengan
    // kemunculan pertama, melalui array sekali lagi
    // mencetak frekuensi elemen dan menandai
    // frekuensi sebagai -1 sehingga elemen yang sama
    // tidak dicetak beberapa kali.
    for (int i = 0; i < n; i++) {
        if (mp[arr[i]] != -1)
        {
            cout << arr[i] << " " << mp[arr[i]] << endl;
            mp[arr[i]] = -1;
        }
    }
}

int main()
{
    int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}
