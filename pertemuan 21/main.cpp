#include <iostream>

using namespace std;

int main()
{

    int x;
    float y;
    char angka;

    int a [5] = {1,2,4,6,8};
    int b [3];
    b[0] = 7;
    b[1] = 8;

    /*
    int c[50];
    //1-50
    for(int i = 0; i < 50; i++){
        c[i] = i+1;
        cout << c[i] << endl;
    }*/

    /*
    int c[5];
    //1-5
    for(int i = 0; i < 5; i++) {
        cin >> c[i];
    }
    for(int i = 4; i >= 0; i--){
        cout << c[i] << " ";
    }*/

    /*
    int u;
    cout << "inputkan jumlah array; ";
    cin >> u;
    int c[u];
    for(int i=0; i< u; i++) {
        cin >> c[i];
    }
    for(int i = 0; i < u; i++){
        cout << c[i] <<" ";
    }*/

    int u;
    cout << "inputkan jumlah array; ";
    cin >> u;

    float sum = 0;
    float avg;
    int c[u];
    for(int i=0; i< u; i++) {
        cin >> c[i];
    }
    for(int i = 0; i < u; i++){
        cout << c[i] <<" ";
        sum += c[1];
    }

    cout << endl;
    cout << sum << endl;
    avg = (float) sum/u; //casting
    cout << avg << endl;

    return 0;
}
