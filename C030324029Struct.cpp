#include <iostream>
using namespace std;

struct mahasiswa
{
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main(int argc, char const *argv[])
{
    
    mahasiswa aqshal;
    mahasiswa *dataAqshal = &aqshal;
    
    system("cls");
    cout << "Masukkan NIM: ";
    cin >> dataAqshal->nim;
    cout << "Masukkan Nama: ";
    cin >> dataAqshal->nama;
    cout << "Masukkan Alamat: ";
    cin >> dataAqshal->alamat;
    cout << "Masukkan ipk: ";
    cin >> dataAqshal->ipk;
    
    cout << "NIM: " << dataAqshal->nim << endl;
    cout << "Nama: " << dataAqshal->nama << endl;
    cout << "Alamat: " << dataAqshal->alamat << endl;
    cout << "IPK: " << dataAqshal->ipk << endl;
    
    return 0;
}