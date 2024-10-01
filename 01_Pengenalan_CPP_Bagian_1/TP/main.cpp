#include <iostream>

using namespace std;

int main()
{
    /*Nama dan Nim
    string nama, nim;
    cout << "Siapa Nama Anda? ";
    cin >> nama;
    cout << "Berapa Nim Anda? ";
    cin >> nim;
    cout << "Nama Saya: " << nama << endl;
    cout << "NIM Saya: " << nim << endl;
    return 0;

    /*Aritmatika
    int angka1 = 3, angka2 = 4, hasil1;
    float angka3 = 3.0, angka4 = 4.0, hasil2;
    hasil1 = angka1 + angka2;
    cout << hasil1 << endl;
    hasil1 = angka1 - angka2;
    cout << hasil1 << endl;
    hasil1 = angka1 * angka2;
    cout << hasil1 << endl;
    hasil1 = angka1 / angka2;
    cout << hasil1 << endl;
    hasil1 = angka2 / angka1;
    cout << hasil1 << endl;
    hasil1 = angka1 % angka2;
    cout << hasil1 << endl;
    hasil1 = angka2 % angka1;
    cout << hasil1 << endl;
    hasil2 = angka3 / angka4;
    cout << hasil2 << endl;
    return 0;

    /*Operator Perbandingan
    int bil1 = 2, bil2 = 3, hasil;
    hasil = bil1 > bil2;
    cout << hasil << endl;
    hasil = bil1 >= bil2;
    cout << hasil << endl;
    hasil = bil1 < bil2;
    cout << hasil << endl;
    hasil = bil1 <= bil2;
    cout << hasil << endl;
    hasil = bil1 == bil2;
    cout << hasil << endl;
    hasil = bil1 != bil2;
    cout << hasil << endl;
    return 0;

    /*Operasi Logika
    int bil3 = 2, bil4 = 3, hasilLog;
    hasilLog = bil3 <= bil4&& bil3 < bil4;
    cout << hasilLog << endl;
    hasilLog = bil3 >= bil4 || bil3 < bil4;
    cout << hasilLog << endl;
    hasilLog = not(bil3 >= bil4) || bil3 < bil4;
    cout << hasilLog << endl;
    return 0;

    /*Struktur Kontrol*/
    /*if-else
    int nilai;
    cin >> nilai;
    if (nilai > 80) {
        cout << "A" << endl;
    } else {
        cout << "Bukan A" << endl;
    }
    return 0;

    /*for
    int a, b, bilangan;
    cout << "Masukan batas bawah: ";
    cin >> a;
    cout << "Masukan batas bawah: ";
    cin >> b;
    for (bilangan = a; bilangan <=b ; bilangan ++) {
        cout << "Bilangan : " << bilangan << endl;
    }
    return 0;

    /*while do*/
    int bilangan, asli, jumlah;
    cout << "Masukkan bilangan asli: ";
    cin >> asli;
    bilangan = 1;
    jumlah = 0;
    while (bilangan <= asli) {
        if (bilangan % 2 == 0){
            jumlah += bilangan;
        }
        bilangan++;
    }
    cout << "Jumlah bilangan genap: " << jumlah << endl;
    return 0;
}
