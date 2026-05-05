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

class siswa // Deklarasi kelas siswa yang memiliki anggota data private
{
private: // Anggota data private untuk menyimpan ID siswa
    int id; // Variabel untuk menyimpan ID siswa

public: // Deklarasi fungsi untuk mengatur ID siswa dan menampilkan semua informasi siswa yang akan diakses melalui objek orang
    void setId(int i); // Fungsi untuk mengatur ID siswa
    void displayAll(orang &o); // Fungsi untuk menampilkan semua informasi siswa yang akan diakses melalui objek orang, termasuk nama yang merupakan anggota data private dari kelas orang yang dapat diakses karena kelas siswa adalah friend class dari kelas orang
};

void siswa::displayAll(orang &o) // Definisi fungsi displayAll yang mengakses anggota data private dari kelas orang dan menampilkannya bersama dengan ID siswa
{
    cout << "Nama: " << o.nama << endl; // Menampilkan nama orang yang diakses melalui objek orang
    cout << "ID: " << id << endl; // Menampilkan ID siswa yang merupakan anggota data private dari kelas siswa yang diakses melalui objek siswa
}

void siswa::setId(int i) // Definisi fungsi setId yang mengubah ID siswa dengan nilai yang diberikan
{
    id = i; // Mengubah ID siswa dengan nilai yang diberikan
}

