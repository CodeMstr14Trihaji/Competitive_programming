#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> removeWordsStartingWithC(vector<string>& kata) {
    vector<string> hasil;
    for (const string& word : kata) {
        // Cek jika kata dimulai dengan huruf 'C' kapital
        if (word[0] != 'C' && word[0] != 'c') {
            hasil.push_back(word); // Masukkan kata ke hasil jika tidak dimulai dengan 'C'
        }
    }
    return hasil;
}

int main() {
    int n;
    cout << "Masukan banyak kata: ";
    cin >> n;

    vector<string> kata(n);

    for (int i = 0; i < n; i++) {
        cout << "Masukan kata ke-" << i + 1 << ": ";
        cin >> kata[i];
    }

    vector<string> hasil = removeWordsStartingWithC(kata);

    // Tampilkan hasil
    cout << "Kata-kata setelah dihapus yang dimulai dengan 'C':" << endl;
    for (const string& word : hasil) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
