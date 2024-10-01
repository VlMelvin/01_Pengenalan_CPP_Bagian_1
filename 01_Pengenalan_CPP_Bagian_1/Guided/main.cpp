#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    /*Tipe Data
    int angka = 10;
    float desimal = 10.5;
    string kalimat = "Melvin";
    double tinggi = 10.4;
    char jenis_kelamin = 'L';
    bool isSunny = true;

    cout << "Angka " << angka << endl;*/

    /*fungsi cin getch*/
    int angka;

    cout << "Masukan Angka : ";
    cin >> angka;

    cout << "Angka : " << angka << endl;

    getch();

    /*Operator*/
    int angka1 = 10;
    int angka2 = 10;

    bool hasil = (angka1 == angka2);

    cout << "Hasilnya : " << boolalpha << hasil << endl;

    bool kondisi1 = true;
    bool kondisi2 = false;

    bool jadi = (kondisi1 || kondisi2);

    cout << "Jadi : " << boolalpha << jadi << endl;

    /*Percabangan*/
    string kata;
    cout << "Masukan Kata 'Halo' : " << endl;
    cin >> kata;

    if (kata == "Halo"){
        cout << "Kata sesuai" << endl;
    }else{
    cout << "Kata salah" << endl;
    }

    int Tv;

        cout << "Daftar channel TV anda" << endl;
        cout << "1. RCTI" << endl;
        cout << "2. Indosiar" << endl;

        cout << "Pilih Channel (1/2) : ";
        cin >> Tv;

        switch(Tv) {
        case 1 :
            cout << "Channel yg anda pilih RCTI" << endl;
            break;
        case 2 :
            cout << "Channel yg anda piih Indosiar" << endl;
            break;
        default :
            cout << "Masukan channel sesuai list" << endl;
    }

    /*Perulangan*/
    int i;
    for(i=0; i>5; i--){
        cout << "Hello World" << endl;
    }

    for(i=0; i<5; i++){
        cout << i-1 << "Hello World" << endl;
    }
}
