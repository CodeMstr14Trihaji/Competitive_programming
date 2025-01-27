// Palidrome adalah kata yang kalau dibalik tetap sama
// contoh: "katak", "malam", "level"
// palidrome juga bisa memiliki spasi, contoh: "ibu ratna antar ubi"
// polidrome tetap bisa memiliki jumlah karakter genap atau ganjil

#include <iostream>
using namespace std;

bool isPalidrome(string kata){
    // menentukan apakah kata polidrome atau tidak
    int n = kata.length();
    for(int i=0;i<n/2;i++){
        if(kata[i] != kata[n-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    string kata;
    cout << "Masukan kata: ";
    getline(cin >> ws, kata);

    if(isPalidrome(kata)){
        cout << "Palidrome" << endl;
    }else{
        cout << "Bukan Palidrome" << endl;
    }
    return 0;
}