#include <iostream> // Menyertakan library iostream untuk input dan output
#include <string> // Menyertakan library string untuk menggunakan tipe data string
using namespace std; // Menggunakan namespace std untuk menghindari penulisan std:: sebelum setiap penggunaan elemen dari library standar

class siswa; // Forward declaration untuk kelas siswa agar dapat digunakan dalam deklarasi kelas orang

class orang // Deklarasi kelas orang yang memiliki anggota data private dan fungsi friend untuk diakses oleh kelas siswa
{
private: // Anggota data private untuk menyimpan nama orang
    string nama; // Variabel untuk menyimpan nama orang

public: // Deklarasi fungsi untuk mengatur nama orang dan deklarasi kelas friend siswa yang dapat mengakses anggota data private dari kelas orang
    void setNama(string n); // Fungsi untuk mengatur nama orang
    friend class siswa; // Deklarasi kelas friend siswa yang memungkinkan kelas siswa untuk mengakses anggota data private dari kelas orang
};

