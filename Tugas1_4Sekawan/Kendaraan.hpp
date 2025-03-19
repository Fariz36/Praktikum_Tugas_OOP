/*
Nama  : Mochammad Fariz Rifqi Rizqulloh
NIM   : 13523069
Kelas : K-02
*/

#ifndef __KENDARAAN_HPP__
#define __KENDARAAN_HPP__

#include <string>
using namespace std;

class Kendaraan {
	private :
    int NomorKendaraan;
    int TahunKeluaran;
    string Kategori;
    string Merk;
  public :
    Kendaraan();
    Kendaraan(int nomor, int keluaran, string merk, string kategori);
    Kendaraan(const Kendaraan& other);
    ~Kendaraan();
    Kendaraan& operator=(const Kendaraan& other);

    void printInfo();
    int biayaSewa(int lama);
};

#endif