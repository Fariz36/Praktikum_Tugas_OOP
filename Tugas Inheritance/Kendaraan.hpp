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
	protected :
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
    virtual void printInfo() = 0;
    virtual int biayaSewa(int lama) = 0;
};

class Bus : public Kendaraan {
  private :
    int kapasitas;
  public :
    Bus();
    Bus(int nomor, int keluaran, string merk, string kategori, int kapasitas);
    Bus(const Bus& other);
    ~Bus();
    Bus& operator=(const Bus& other);

    void printInfo();
    int biayaSewa(int lama);
};

class Minibus : public Kendaraan {
  public : 
    Minibus();
    Minibus(int nomor, int keluaran, string merk, string kategori);
    Minibus(const Minibus& other);
    ~Minibus();
    Minibus& operator=(const Minibus& other);

    void printInfo();
    int biayaSewa(int lama);
    int diskon(int lama);
};

class Mobil : public Kendaraan {
  public : 
    Mobil();
    Mobil(int nomor, int keluaran, string merk, string kategori);
    Mobil(const Mobil& other);
    ~Mobil();
    Mobil& operator=(const Mobil& other);

    void printInfo();
    int biayaSewa(int lama);
};

#endif