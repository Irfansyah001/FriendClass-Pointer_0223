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

void belahKetupat::input() { // Definisi fungsi input untuk kelas belahKetupat yang menginput data diagonal dan sisi belahKetupat
    cout << "--- Input Belah Ketupat ---" << endl; // Menampilkan judul untuk input belahKetupat
    cout << "Masukkan diagonal 1 : "; // Menampilkan prompt untuk menginput diagonal 1 belahKetupat
    cin >> diagonal1; // Menginput nilai diagonal 1 belahKetupat
    cout << "Masukkan diagonal 2 : "; // Menampilkan prompt untuk menginput diagonal 2 belahKetupat
    cin >> diagonal2; // Menginput nilai diagonal 2 belahKetupat
    cout << "Masukkan panjang sisi: "; // Menampilkan prompt untuk menginput panjang sisi belahKetupat
    cin >> sisi; // Menginput nilai panjang sisi belahKetupat
}

void belahKetupat::output() { // Definisi fungsi output untuk kelas
    cout << "--- Data Belah Ketupat ---" << endl; // Menampilkan judul untuk output belahKetupat
    cout << "Diagonal 1 : " << diagonal1 << endl; // Menampilkan nilai diagonal 1 belahKetupat
    cout << "Diagonal 2 : " << diagonal2 << endl; // Menampilkan nilai diagonal 2 belahKetupat
    cout << "Sisi       : " << sisi << endl; // Menampilkan nilai panjang sisi belahKetupat
}

void belahKetupat::luas() { // Definisi fungsi luas untuk kelas belahKetupat yang menghitung dan menampilkan luas belahKetupat
    float l = (diagonal1 * diagonal2) / 2; // Menghitung luas belahKetupat menggunakan rumus (diagonal1 * diagonal2) / 2
    cout << "Luas Belah Ketupat : " << l << endl; // Menampilkan hasil luas belahKetupat
}

void belahKetupat::keliling(layangLayang &ll) { // Definisi fungsi keliling untuk kelas belahKetupat yang menghitung dan menampilkan keliling belahKetupat, serta mengakses anggota data private dari kelas layangLayang melalui friend method
    float k = 4 * sisi; // Menghitung keliling belahKetupat menggunakan rumus 4 * sisi
    cout << "Keliling Belah Ketupat : " << k << endl; // Menampilkan hasil keliling belahKetupat

    float kll = 2 * (ll.sisi1 + ll.sisi2); // Menghitung keliling layangLayang menggunakan rumus 2 * (sisi1 + sisi2) dengan mengakses anggota data private dari kelas layangLayang melalui friend method
    cout << "Keliling Layang-Layang : " << kll << endl; // Menampilkan hasil keliling layangLayang yang dihitung melalui friend method dari kelas belahKetupat
}

void layangLayang::input() { // Definisi fungsi input untuk kelas layangLayang yang menginput data diagonal dan sisi layangLayang
    cout << "--- Input Layang-Layang ---" << endl; // Menampilkan judul untuk input layangLayang
    cout << "Masukkan diagonal 1 : "; // Menampilkan prompt untuk menginput diagonal 1 layangLayang
    cin >> diagonal1; // Menginput nilai diagonal 1 layangLayang
    cout << "Masukkan diagonal 2 : "; // Menampilkan prompt untuk menginput diagonal 2 layangLayang
    cin >> diagonal2; // Menginput nilai diagonal 2 layangLayang
    cout << "Masukkan sisi 1     : "; // Menampilkan prompt untuk menginput sisi 1 layangLayang
    cin >> sisi1; // Menginput nilai sisi 1 layangLayang
    cout << "Masukkan sisi 2     : "; // Menampilkan prompt untuk menginput sisi 2 layangLayang
    cin >> sisi2; // Menginput nilai sisi 2 layangLayang
}

void layangLayang::output() { // Definisi fungsi output untuk kelas
    cout << "--- Data Layang-Layang ---" << endl; // Menampilkan judul untuk output layangLayang
    cout << "Diagonal 1 : " << diagonal1 << endl; // Menampilkan nilai diagonal 1 layangLayang
    cout << "Diagonal 2 : " << diagonal2 << endl; // Menampilkan nilai diagonal 2 layangLayang
    cout << "Sisi 1     : " << sisi1 << endl; // Menampilkan nilai sisi 1 layangLayang
    cout << "Sisi 2     : " << sisi2 << endl; // Menampilkan nilai sisi 2 layangLayang
}

void layangLayang::luas() { // Definisi fungsi luas untuk kelas layangLayang yang menghitung dan menampilkan luas layangLayang
    float l = (diagonal1 * diagonal2) / 2; // Menghitung luas layangLayang menggunakan rumus (diagonal1 * diagonal2) / 2
    cout << "Luas Layang-Layang : " << l << endl; // Menampilkan hasil luas layangLayang
}

void layangLayang::keliling() { // Definisi fungsi keliling untuk kelas layangLayang yang menghitung dan menampilkan keliling layangLayang
    float k = 2 * (sisi1 + sisi2); // Menghitung keliling layangLayang menggunakan rumus 2 * (sisi1 + sisi2)
    cout << "Keliling Layang-Layang : " << k << endl; // Menampilkan hasil keliling layangLayang
}

int main() { // Fungsi utama untuk menjalankan program
    layangLayang ll; // Membuat objek ll dari kelas layangLayang
    belahKetupat bk; // Membuat objek bk dari kelas belahKetupat

    ll.input(); // Memanggil fungsi input untuk menginput data layangLayang
    cout << endl; // Menambahkan baris kosong untuk pemisah antara input layangLayang dan output layangLayang
    ll.output(); // Memanggil fungsi output untuk menampilkan data layangLayang
    ll.luas(); // Memanggil fungsi luas untuk menghitung dan menampilkan luas layangLayang
    ll.keliling(); // Memanggil fungsi keliling untuk menghitung dan menampilkan keliling layangLayang

    cout << endl; // Menambahkan baris kosong untuk pemisah antara output layangLayang dan input belahKetupat

    bk.input(); // Memanggil fungsi input untuk menginput data belahKetupat
    cout << endl; // Menambahkan baris kosong untuk pemisah antara input belahKetupat dan output belahKetupat
    bk.output(); // Memanggil fungsi output untuk menampilkan data belahKetupat
    bk.luas(); // Memanggil fungsi luas untuk menghitung dan menampilkan luas belahKetupat

    cout << endl; // Menambahkan baris kosong untuk pemisah antara output belahKetupat dan keliling belahKetupat
    bk.keliling(ll); // Memanggil fungsi keliling untuk menghitung dan menampilkan keliling belahKetupat, serta mengakses anggota data private dari kelas layangLayang melalui friend method

    return 0; // Mengembalikan nilai 0 untuk menandakan program selesai dengan sukses
}
