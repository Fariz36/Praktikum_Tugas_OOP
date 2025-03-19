#include <bits/stdc++.h>
#include "Jam.hpp"
using namespace std;

/*
NAMA    : MOCHAMMAD FARIZ RIFQI RIZQULLOH
NIM     : 13523069
Kelas   : K-2
*/

///// SOAL PERTAMA /////
template<typename T>
T MinArray(T arr[], int n) {
    //misalkan element pertama adalah element "paling minimum"
    T ans = arr[0];
    for (int i = 1; i < n; i++) {
        ans = min(ans, arr[i]);
    }

    return ans;
}

//// SOAL KEDUA DAN SOAL KETIGA/////
int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    cout << MinArray(intArray, 5) << endl;

    double doubleArray[] = {-5.0, -10.4, 5.3, 1.5};
    cout << MinArray(doubleArray, 4) << endl;


    Jam Siang1 = Jam(12, 30, 0);
    //jam 12.30 siang

    Jam Siang2 = Jam(10, 45, 0);
    //jam 10.45 siang

    Jam Pagi1 = Jam(8, 0, 0);
    //jam 8.00 pagi

    Jam Pagi2 = Jam(7, 30, 0);  
    //jam 7.30 pagi

    Jam Sore1 = Jam(15, 30, 0);
    //jam 15.30 sore

    Jam Sore2 = Jam(16, 20, 0);
    //jam 16.20 sore

    Jam Malam1 = Jam(20, 0, 0);
    //jam 20.00 malam

    Jam Malam2 = Jam(21, 0, 0);
    //jam 21.00 malam

    Jam JamArray[] = {Siang1, Siang2, Pagi1, Pagi2, Sore1, Sore2, Malam1, Malam2};
    cout << MinArray(JamArray, 8) << endl;
}
/*
Output :
1
-10.4
7:30:0
*/


