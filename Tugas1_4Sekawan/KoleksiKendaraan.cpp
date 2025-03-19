/*
Nama  : Mochammad Fariz Rifqi Rizqulloh
NIM   : 13523069
Kelas : K-02
*/

#include "KoleksiKendaraan.hpp"
#include <iostream>
using namespace std;

KoleksiKendaraan::KoleksiKendaraan() {
	this->buffer = new Kendaraan[100];
  this->size = 100;
  this->Neff = 0;
}

KoleksiKendaraan::KoleksiKendaraan(int size) {
  this->buffer = new Kendaraan[size];
  this->size = size;
  this->Neff = 0;
}

KoleksiKendaraan::KoleksiKendaraan(const KoleksiKendaraan& other) {
  this->buffer = new Kendaraan[other.size];
  this->size = other.size;
  this->Neff = other.Neff;

  for (int i = 0; i < this->size; i++) {
    this->buffer[i] = other.buffer[i];
  }
}

KoleksiKendaraan::~KoleksiKendaraan() {
  delete[] buffer;
}

void KoleksiKendaraan::printAll() {
  cout << "Banyak Koleksi : " << this->Neff << endl;
  for (int i = 0; i < this->Neff; i++) {
    cout << "=-=-=-=- Koleksi " << i+1 << " : -=-=-=-=" << endl;
    this->buffer[i].printInfo();
  }
}

KoleksiKendaraan& KoleksiKendaraan::operator=(const KoleksiKendaraan& other) {
  this->buffer = new Kendaraan[other.size];
  this->size = other.size;
  this->Neff = other.Neff;

  for (int i = 0; i < this->size; i++) {
    this->buffer[i] = other.buffer[i];
  }

  return *this;
}

void KoleksiKendaraan::operator<<(const Kendaraan& other) {
  //Asumsi : Selalu ada tempat di buffer
  this->buffer[this->Neff] = other;
  this->Neff++;
}

void KoleksiKendaraan::operator<<(const KoleksiKendaraan& other) {
  //Asumsi : Selalu ada tempat di buffer
  for (int i = 0; i < other.Neff; i++) {
    this->buffer[this->Neff] = other.buffer[i];
    this->Neff++;
  }
}

// int main() {
//   Kendaraan A(69420, 2024, "Toyota", "Mobil");
//   Kendaraan B(12345, 2018, "Honda", "Bus");
//   Kendaraan C(67890, 2020, "Suzuki", "Mobil");
//   Kendaraan D(54321, 2019, "Yamaha", "Bus");
//   Kendaraan E(98765, 2022, "Mitsubishi", "Minibus");
//   Kendaraan F(19283, 2021, "Daihatsu", "Mobil");

//   KoleksiKendaraan collection;
//   collection<<A;
//   collection<<B;
//   collection<<C;
//   collection<<D;
//   collection<<E;
//   collection<<F;

//   Kendaraan G(13523069, 2005, "Tesla", "Minibus");
//   KoleksiKendaraan collection2;
//   collection2 = collection;
//   collection2<<G;

//   collection2.printAll();
// }
