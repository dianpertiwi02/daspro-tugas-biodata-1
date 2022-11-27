#include <iostream>

using namespace std;

int main()
{
    cout << "Program Ini Akan Berhenti jika Anda Menginputkan Angka -99" << endl;
    cout << endl;
    int angka;
    while(true){
        cout << "Masukkan Nilai Anda : ";
        cin >> angka;
        if(angka == -99){
            cout << endl;
            cout << "Program Keluar Karena Break" << endl;
            break;
        }
    }
    return 0;
}
