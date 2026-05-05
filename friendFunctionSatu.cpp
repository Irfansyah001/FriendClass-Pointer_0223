#include <iostream> // Menyertakan library iostream untuk input dan output
#include <string> // Menyertakan library string untuk menggunakan tipe data string
using namespace std; // Menggunakan namespace std untuk menghindari penulisan std:: sebelum setiap penggunaan elemen dari library standar

class mahasiswa // Deklarasi kelas mahasiswa
{
private: // Anggota data private untuk menyimpan nama mahasiswa
    string nama; // Variabel untuk menyimpan nama mahasiswa

public: // Deklarasi fungsi friend yang dapat mengakses anggota data private
    friend void setNama(mahasiswa &a, string); // Fungsi friend untuk mengatur nama mahasiswa
};

