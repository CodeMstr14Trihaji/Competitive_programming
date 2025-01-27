#include<iostream>
using namespace std;

string howManyAlphabet(int n){
    string a="L",b,c="mborgini";
    for(int i=0;i<=n;i++){
        b+="a";     // menambahkan string "a" sebanyak n kali
    }
    return a+b+c;
}

int main(){
    int n;
    cout << "Masukan nilai: ";
    cin >> n;

    cout << howManyAlphabet(n) << endl;
    return 0;
}