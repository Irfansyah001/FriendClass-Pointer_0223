#include <iostream> // Menyertakan library iostream untuk input dan output
using namespace std; // Menggunakan namespace std untuk menghindari penulisan std:: sebelum setiap penggunaan elemen dari library standar

class pelajar; // Forward declaration untuk kelas pelajar agar dapat digunakan dalam deklarasi kelas manusia

class manusia // Deklarasi kelas manusia yang memiliki fungsi friend untuk mengakses anggota data private dari kelas pelajar
{
public: // Deklarasi fungsi friend yang dapat mengakses anggota data private dari kelas pelajar
    void showNilaiPelajar(pelajar &p); // Fungsi untuk menampilkan nilai pelajar yang akan diakses melalui objek manusia
};

class pelajar // Deklarasi kelas pelajar yang memiliki anggota data private dan fungsi friend untuk diakses oleh kelas manusia
{
private: // Anggota data private untuk menyimpan nilai pelajar
    int nilai; // Variabel untuk menyimpan nilai pelajar

public: // Konstruktor untuk menginisialisasi nilai pelajar
    pelajar() { nilai = 100; } // Konstruktor default yang menginisialisasi nilai pelajar dengan 100
    friend void manusia::showNilaiPelajar(pelajar &p); // Deklarasi fungsi friend yang memungkinkan kelas manusia untuk mengakses anggota data private dari kelas pelajar
};

void manusia::showNilaiPelajar(pelajar &p) // Definisi fungsi showNilaiPelajar yang mengakses anggota data private dari kelas pelajar dan menampilkannya
{
    cout << "Nilai Pelajar: " << p.nilai << endl; // Menampilkan nilai pelajar yang diakses melalui objek manusia
}

