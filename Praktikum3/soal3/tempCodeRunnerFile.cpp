#include <bits/stdc++.h>
using namespace std;

int main() {
  map<string, int> absen;
  absen["Abdul"] = 1;
  absen["Budi"] = 2;

  cout << absen.size() << endl;
  
  //aku mau ngecheck apakah ada Cahyo di dalam absen
  cout << absen.count("Cahyo") << endl;
  if (absen.find("Cahyo") != absen.end()) cout << "found" << endl;
  else cout << "not found" << endl;

  cout << absen.size() << endl;

  //karena default value absen itu 0, kita bisa ngecheck langsung
  if (absen["Cahyo"] == 0) {
    cout << "not found" << endl;
  }
  else {
    cout << "found" << endl;
  }

  cout << absen.size() << endl;
}