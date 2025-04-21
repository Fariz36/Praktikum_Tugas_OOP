#include "Gudang.hpp"
#include "BarangElektronik.hpp"
#include "BarangMakanan.hpp"
#include "Barang.hpp"
#include <bits/stdc++.h>
#include "Exception.hpp"
#include <exception>

int main() {
    Gudang x;

    x.sebutBarang(3);

    BarangMakanan A("A", 5, 1);
    BarangMakanan B("B", 5, -1);
    BarangMakanan C("C", 10, 1);
    BarangElektronik D("D", 15, 100);
    BarangElektronik E("E", 40, 100);
    BarangElektronik F("F", 20, 100);
    BarangElektronik G("G", 1, 1);

    x.simpanBarang(&A);
    x.simpanBarang(&B);
    x.simpanBarang(&C);
    x.sebutBarang(3);
    x.simpanBarang(&D);
    x.simpanBarang(&E);
    x.simpanBarang(&F);
    x.sebutBarang(3);
    x.simpanBarang(&G);
    x.tambahTenagaKerja(6);

    BarangMakanan H("H", 10, 0);
    BarangMakanan I("I", 1, 1);
    BarangMakanan J("J", 1, 1);
    BarangMakanan K("K", 1, 1);
    BarangMakanan L("L", 1, 1);
    BarangMakanan M("M", 1, 1);
    BarangMakanan N("N", 1, 1);

    x.simpanBarang(&H);
    x.simpanBarang(&I);
    x.simpanBarang(&J);
    x.simpanBarang(&K);
    x.simpanBarang(&L);
    x.simpanBarang(&M);
    x.simpanBarang(&N);

    x.statusGudang();
}