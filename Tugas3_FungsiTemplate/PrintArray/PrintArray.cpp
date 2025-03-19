#include <bits/stdc++.h>
#include "Point.hpp"
using namespace std;

/*
NAMA    : MOCHAMMAD FARIZ RIFQI RIZQULLOH
NIM     : 13523069
Kelas   : K-2
*/

///// SOAL PERTAMA /////
template<typename T>
void PrintArray(T arr[], int n) {
    if (n == 0) {
      cout << "Array Kosong" << endl;
      return;
    }

    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
}

//// SOAL KEDUA DAN SOAL KETIGA/////
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    PrintArray(arr, n);

    double arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    PrintArray(arr2, n2);

    char arr3[] = {'a', 'b', 'c', 'd', 'e'};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    PrintArray(arr3, n3);

    Point arr4[5];
    arr4[0] = Point(1, 2);
    arr4[1] = Point(3, 4);
    arr4[2] = Point(-1, -2);
    arr4[3] = Point(-3, -4);
    arr4[4] = Point(0, 0);
    int n4 = sizeof(arr4) / sizeof(arr4[0]); 
    PrintArray(arr4, n4);

    return 0;
}
/*
Output :
1 2 3 4 5 
1.1 2.2 3.3 4.4 5.5
a b c d e
(1, 2) (3, 4) (-1, -2) (-3, -4) (0, 0)
*/