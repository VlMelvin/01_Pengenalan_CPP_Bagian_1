#include <iostream>

using namespace std;

int main()
{
    float Angka1, Angka2;
    cout << "Masukkan Angka Pertama: ";
    cin >> Angka1;
    cout << "Masukkan Angka Ke Dua: ";
    cin >> Angka2;
    float jumlah = Angka1 + Angka2;
    float kurang = Angka1 - Angka2;
    float kali = Angka1 * Angka2;

    if (Angka1 != 0 || Angka2 != 0) {
        float bagi = Angka1 / Angka2;
        cout << "Hasil Bagi : " << bagi << endl;
    } else {
        cout << "Tidak boleh menggunakan angka 0" << endl;
    }

    cout << "Hasil Jumlah : " << jumlah << endl;
    cout << "Hasil Kurang : " << kurang << endl;
    cout << "Hasil Kali : " << kali << endl;

    return 0;
}
