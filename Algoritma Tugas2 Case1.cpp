#include <iostream>
#include <string>
using namespace std;

double hitung_rata_rata(double tugas1, double tugas2, double tugas3) {
    double rata_rata = (tugas1 + tugas2 + tugas3) / 3;
    return rata_rata;
}

int main() {
    string nim, nama;
    double tugas1, tugas2, tugas3;
    cout << "Masukkan NIM siswa: ";
    getline(cin, nim);

    cout << "Masukkan nama siswa: ";
    getline(cin, nama);

    cout << "Masukkan nilai tugas 1: ";
    cin >> tugas1;

    cout << "Masukkan nilai tugas 2: ";
    cin >> tugas2;
 cout << "Masukkan nilai tugas 3: ";
    cin >> tugas3;

    double rata_rata = hitung_rata_rata(tugas1, tugas2, tugas3);

    cout << "\nNilai rata-rata siswa " << nama << " dengan NIM " << nim << " adalah: " << rata_rata << endl;

    return 0;
}
