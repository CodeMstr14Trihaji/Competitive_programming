#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> matchDictionary(const string& kata, const vector<string>& arr){
    vector<string> hasil;
    for(const string& word : arr){
        if(word.find(kata) != string::npos){
            hasil.push_back(word);
        }
    }
    return hasil;
}

// apa maksud dari baris ke 9? 
// kegunaan dari baris ke 9 adalah untuk mengecek apakah kata yang dicari ada di dalam kata yang ada di dalam array atau tidak.
// kegunaan dari fungsi find() adalah untuk mencari kata yang dicari di dalam kata yang ada di dalam array. Jika kata yang dicari ada di dalam kata yang ada di dalam array, maka akan mengembalikan posisi kata yang dicari di dalam kata yang ada di dalam array. Jika kata yang dicari tidak ada di dalam kata yang ada di dalam array, maka akan mengembalikan string::npos.

// string::npos adalah konstanta yang digunakan untuk menunjukkan bahwa posisi yang dicari tidak ditemukan.

// header yang diperlukan adalah iostream, vector, dan string.

int main(){
    int n;
    cout << "Masukan banyaknya kata: ";
    cin >> n;

    vector<string> arr(n);
    for(int i = 0; i < n; i++){
        cout << "Masukan kata ke-" << i + 1 << ": ";
        getline(cin >> ws, arr[i]);
    }

    string nis;
    cout << "Masukan kata yang ingin dicocokan: ";
    getline(cin >> ws, nis);
    
    vector<string> hasil = matchDictionary(nis, arr);

    cout << "Kata yang cocok: ";
    for(const string& word : hasil){
        cout << word << " ";
    }
    cout << endl;

    return 0;
}