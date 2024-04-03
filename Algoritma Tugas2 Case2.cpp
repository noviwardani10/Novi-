#include <iostream>
#include <string>
using namespace std;

double hitung_nilai_akhir(double keaktifan, double tugas, double ujian) {
    double nilai_murni_keaktifan = keaktifan * 0.20;
    double nilai_murni_tugas = tugas * 0.50;
    double nilai_murni_ujian = ujian * 0.30;
    double nilai_akhir = nilai_murni_keaktifan + nilai_murni_tugas + nilai_murni_ujian;
    return nilai_akhir;
}

int main() {
    string nama_siswa;
    double nilai_keaktifan, nilai_tugas, nilai_ujian;
cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "Nama Siswa : ";
    getline(cin, nama_siswa);
    
    cout << "Nilai Keaktifan : ";
    cin >> nilai_keaktifan;

    cout << "Nilai Tugas : ";
    cin >> nilai_tugas;

    cout << "Nilai Ujian : ";
    cin >> nilai_ujian;

    double nilai_akhir = hitung_nilai_akhir(nilai_keaktifan, nilai_tugas, nilai_ujian);

    cout << "\nNilai akhir siswa " << nama_siswa << " adalah: " << nilai_akhir << endl;
    
return 0;
}
