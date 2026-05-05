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
    mahasiswa mhs{1}; // Object mhs; Membuat objek mhs dengan nim 1
    mhs.showNim(); // Member Accsess Operator; Menampilkan nim mhs

    mahasiswa &refMhs = mhs; // Pointer Reference refMhs; Membuat reference refMhs yang merujuk ke mhs
    refMhs.nim = 2; // Member Access Operator; Mengubah nim melalui reference
    refMhs.showNim(); // Member Access Operator; Menampilkan nim melalui reference
    mhs.showNim(); // Member Access Operator; Menampilkan nim mhs setelah diubah melalui reference

    mahasiswa *pMhs = &mhs; // Pointer Dereference pMhs; Membuat pointer pMhs yang menunjuk ke mhs
    pMhs->nim = 3; // Arrow Operator; Mengubah nim melalui pointer
    pMhs->showNim(); // Arrow Operator; Menampilkan nim melalui pointer

    return 0;
}