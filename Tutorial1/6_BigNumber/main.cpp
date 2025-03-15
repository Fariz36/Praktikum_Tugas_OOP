#include "BigNumber.cpp"
#include <iostream>
using namespace std;

int main() {
  BigNumber a(123), b("2210");
  //cout << a << endl; // 123
  for (int i = a.getMaxDigit() - 1; i >= 0; i--) {
    cout << a[i];
  }

  //cout << b << endl; // 2210
  for (int i = a.getMaxDigit() - 1; i >= 0; i--) {
    cout << b[i];
  }

  cout << (a < b) << endl; // 1
  cout << (a > b) << endl; // 0

  //cout << (a + b) << endl; // 2333
  BigNumber c = a + b;
  for (int i = a.getMaxDigit() - 1; i >= 0; i--) {
    cout << c[i];
  }
  return 0;
}