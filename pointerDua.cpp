#include <iostream>
using namespace std;

class mahasiswa
{
public:
    int nim;
    void showNim()
    {
        cout << "NIM: " << nim << endl;
    }
};

int main()
{
    mahasiswa *mhs = new mahasiswa{1}; // Pointer to Object mhs; Membuat pointer mhs yang menunjuk ke objek mahasiswa dengan nim 1
    mhs->showNim(); // Arrow Operator; Menampilkan nim mhs melalui pointer
    mhs->nim = 2; // Arrow Operator; Mengubah nim melalui pointer
    mhs->showNim(); // Arrow Operator; Menampilkan nim mhs setelah diubah melalui pointer

    delete mhs; // Menghapus objek yang dibuat dengan new untuk menghindari memory leak
    return 0;
}