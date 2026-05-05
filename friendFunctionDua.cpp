#include <iostream> // Menyertakan library iostream untuk input dan output
using namespace std; // Menggunakan namespace std untuk menghindari penulisan std:: sebelum setiap penggunaan elemen dari library standar

class pelajar; // Forward declaration untuk kelas pelajar agar dapat digunakan dalam deklarasi kelas manusia

class manusia // Deklarasi kelas manusia yang memiliki fungsi friend untuk mengakses anggota data private dari kelas pelajar
{
public: // Deklarasi fungsi friend yang dapat mengakses anggota data private dari kelas pelajar
    void showNilaiPelajar(pelajar &p); // Fungsi untuk menampilkan nilai pelajar yang akan diakses melalui objek manusia
};

