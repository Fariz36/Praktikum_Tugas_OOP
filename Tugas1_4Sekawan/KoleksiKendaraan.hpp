/*
Nama  : Mochammad Fariz Rifqi Rizqulloh
NIM   : 13523069
Kelas : K-02
*/

#ifndef __KOLEKSI_KENDARAAN_HPP__
#define __KOLEKSI_KENDARAAN_HPP__

#include "Kendaraan.hpp"

class KoleksiKendaraan {
	private:
		Kendaraan* buffer;
		int Neff;
		int size;
	public:
		KoleksiKendaraan();
		KoleksiKendaraan(int size);
		KoleksiKendaraan(const KoleksiKendaraan& other);
		~KoleksiKendaraan();

		void printAll();

		KoleksiKendaraan& operator=(const KoleksiKendaraan& other);
		void operator<<(const Kendaraan& other);
		void operator<<(const KoleksiKendaraan& other);
};

#endif