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

Bus::Bus() : Kendaraan() {
	this->kapasitas = 0;
}

Bus::Bus(int nomor, int keluaran, string merk, string kategori, int kapasitas) : Kendaraan(nomor, keluaran, merk, kategori) {
	this->kapasitas = kapasitas;
}

Bus::Bus(const Bus& other) : Kendaraan(other) {
	this->kapasitas = other.kapasitas;
}

Bus::~Bus() {
}

Bus& Bus::operator=(const Bus& other) {
	Kendaraan::operator=(other);
	this->kapasitas = other.kapasitas;

	return *this;
}

void Bus::printInfo() {
	cout << "Nomor Kendaraan : " << this->NomorKendaraan << endl;
	cout << "Tahun Keluaran : " << this->TahunKeluaran << endl;
	cout << "Merk : " << this->Merk << endl;
	cout << "Kategori : " << this->Kategori << endl;
	cout << "Kapasitas : " << this->kapasitas << endl;
}

int Bus::biayaSewa(int lama) {
	return 1000000*lama;
}

void Minibus::printInfo() {
	cout << "Nomor Kendaraan : " << this->NomorKendaraan << endl;
	cout << "Tahun Keluaran : " << this->TahunKeluaran << endl;
	cout << "Merk : " << this->Merk << endl;
	cout << "Kategori : " << this->Kategori << endl;
}

int Minibus::diskon(int lama) {
	if (lama <= 10) return 0;
	else return 10;
}

int Minibus::biayaSewa(int lama) {
	int discount = diskon(lama);
	if (lama > 5) {
		return discount*50000;
	}
	else {
		return discount*(50000 + 5000*(lama - 5));
	}
}

int Mobil::biayaSewa(int lama) {
	return 500000*lama;
}

// int main() {
// 	Bus b(1, 2000, "Mercedes", "Bus", 50);
// 	b.printInfo();
// }