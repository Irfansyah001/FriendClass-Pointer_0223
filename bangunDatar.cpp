/*
Buatlah sebuah program yang berisi 2 class dimana terdapat class Layang-Layang, Belah Ketupat.
Di setiap class nya berisikan method luas dan keliling serta method input dan output.
Setiap variable memiliki akses private, BangunDatar Belah Ketupat merupakan friend method keliling
dari Layang-Layang, dan semua class hanya dapat diakses menggunakan object.
*/

#include <iostream> // Menyertakan library iostream untuk input dan output
using namespace std; // Menggunakan namespace std untuk menghindari penulisan std:: sebelum setiap penggunaan elemen dari library standar

class layangLayang; // Forward declaration untuk kelas layangLayang agar dapat digunakan dalam deklarasi kelas belahKetupat

class belahKetupat { // Deklarasi kelas belahKetupat yang memiliki anggota data private dan fungsi untuk input, output, luas, dan keliling
private: // Anggota data private untuk menyimpan diagonal dan sisi belahKetupat
    float diagonal1; // Variabel untuk menyimpan diagonal 1 belahKetupat
    float diagonal2; // Variabel untuk menyimpan diagonal 2 belahKetupat
    float sisi; // Variabel untuk menyimpan panjang sisi belahKetupat

public: // Deklarasi fungsi untuk input, output, luas, dan keliling belahKetupat, serta deklarasi friend method keliling yang dapat mengakses anggota data private dari kelas layangLayang
    void input(); // Fungsi untuk menginput data belahKetupat
    void output(); // Fungsi untuk menampilkan data belahKetupat
    void luas(); // Fungsi untuk menghitung dan menampilkan luas belahKetupat
    void keliling(layangLayang &ll); // Fungsi untuk menghitung dan menampilkan keliling belahKetupat, serta mengakses anggota data private dari kelas layangLayang melalui friend method
};

class layangLayang { // Deklarasi kelas layangLayang yang memiliki anggota data private dan fungsi untuk input, output, luas, dan keliling
private: // Anggota data private untuk menyimpan diagonal dan sisi layangLayang
    float diagonal1; // Variabel untuk menyimpan diagonal 1 layangLayang
    float diagonal2; // Variabel untuk menyimpan diagonal 2 layangLayang
    float sisi1; // Variabel untuk menyimpan panjang sisi 1 layangLayang
    float sisi2; // Variabel untuk menyimpan panjang sisi 2 layangLayang

public: // Deklarasi fungsi untuk input, output, luas, dan keliling layangLayang, serta deklarasi friend method keliling yang dapat mengakses anggota data private dari kelas belahKetupat
    void input(); // Fungsi untuk menginput data layangLayang
    void output(); // Fungsi untuk menampilkan data layangLayang
    void luas(); // Fungsi untuk menghitung dan menampilkan luas layangLayang
    void keliling(); // Fungsi untuk menghitung dan menampilkan keliling layangLayang
    friend void belahKetupat::keliling(layangLayang &ll); // Deklarasi friend method keliling yang memungkinkan kelas belahKetupat untuk mengakses anggota data private dari kelas layangLayang
};
