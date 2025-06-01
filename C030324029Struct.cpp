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
    
    aqshal.nim = "C030324029";
    aqshal.nama = "Muhammad Aqshal Habibi";
    aqshal.alamat = "Jl. Teluk Tiram";
    aqshal.ipk = 4.0;

    cout << aqshal.nim<<"\n";
    cout << aqshal.nama<<"\n";
    cout << aqshal.alamat<<"\n";
    cout << aqshal.ipk<<"\n";
    
    return 0;
}