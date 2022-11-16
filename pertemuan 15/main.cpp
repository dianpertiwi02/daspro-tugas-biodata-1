#include <iostream>

using namespace std;

int main()
{
    cout << "==== Daftar Menu ====" << endl;
    cout << "1. Nasi Kerikil" << endl;
    cout << "2. Rica Rica Bekicot" << endl;
    cout << "3. Pepes Brotowali" << endl;
    cout << "4. Kepiting Presto" << endl;

    int x;
    cout << "Masukan kode menu anda" << endl;
    cin >> x;
    switch (x){
        case 1:
            cout << "Nasi Kerikil";
            break;
        case 2:
            cout << "Rica Rica Bekicot";
            break;
        case 3:
            cout << "Pepes Brotowali";
            break;
        case 4:
            cout << "Kepiting Presto";
            break;
        default:
            cout << "Kode tidak ditemukan";

    }
     return 0;
}
