/*
Nama  : Mochammad Fariz Rifqi Rizqulloh
NIM   : 13523069
Kelas : K-02
*/

#include "Kendaraan.hpp"
#include <iostream>
using namespace std;

//ctor
Kendaraan::Kendaraan() {
	this->NomorKendaraan = 0;
	this->TahunKeluaran = 0;
	this->Merk = "XXX";
	this->Kategori = "mobil";
}

//ccons
Kendaraan::Kendaraan(int nomor, int keluaran, string merk, string kategori) {
	this->NomorKendaraan = nomor;
	this->TahunKeluaran = keluaran;
	this->Merk = merk;
	this->Kategori = kategori;
}

//cctor
Kendaraan::Kendaraan(const Kendaraan& other) {
	this->NomorKendaraan = other.NomorKendaraan;
	this->TahunKeluaran = other.TahunKeluaran;
	this->Merk = other.Merk;
	this->Kategori = other.Kategori;
}

//dtor
Kendaraan::~Kendaraan() {
}

//cassign
Kendaraan& Kendaraan::operator=(const Kendaraan& other) {
	this->NomorKendaraan = other.NomorKendaraan;
	this->TahunKeluaran = other.TahunKeluaran;
	this->Merk = other.Merk;
	this->Kategori = other.Kategori;

	return *this;
}

void Kendaraan::printInfo() {
	cout << "Nomor Kendaraan    : " << this->NomorKendaraan << endl;
	cout << "Tahun Keluaran     : " << this->TahunKeluaran << endl;
	cout << "Merk               : " << this->Merk <<endl;
	cout << "Kategori           : " << this->Kategori << endl;
}

int Kendaraan::biayaSewa(int lama) {
	if (this->Kategori == "Bus") {
		return 1000000*lama;
	}
	else if (this->Kategori == "Minibus") {
		if (lama > 5) {
			return 5000000;
		}
		else {
			return 5000000 + 500000*(lama - 5);
		}
	}
	else if (this->Kategori == "Mobil") {
		return 500000*lama;
	}
	else {
		cout << "Jenis kendaraan tidak valid!" << endl;
        return -1;
	}
}

// int main() {
// 	Kendaraan A(69420, 2024, "Toyota", "Mobil");
// 	A.printInfo();
// }