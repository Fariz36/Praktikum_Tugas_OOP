#include <bits/stdc++.h>
using namespace std;

// template<class T, class T>
// void check(T a, T b) {
//     cout << "Masukan Anda: " << a << " dan " << b << ", memiliki tipe yang sama" << endl;
// }

template<class T1>
void func(T1 a, T1 b) {
    cout << "Masukan Anda: " << a << " dan " << b << ", memiliki tipe yang sama" << endl;
}


template<class T1, class T2>
void func(T1 a, T2 b) {
    cout << "Masukan Anda: " << a << " dan " << b << ", mungkin memiliki tipe yang berbeda" << endl;
}

template<>
void func(char a, int b) {
    for (int i = 1; i <= b; i++) {
        cout << a << endl;
    }
}
