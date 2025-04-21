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

  // cara nge iterate map gimana??
  for (auto it : absen) {
    cout << it.first << " " << it.second << endl;
  }

  for (auto [name, nim] : absen) {
    cout << name << " " << nim << endl;
  }

  for (map<string, int>::iterator it = absen.begin(); it != absen.end(); it++) {
    cout << it->first << " " << it->second << endl;
  }

  pair<int, int> koordinat;
  koordinat.first = 10;
  koordinat.second = 20;


  tuple<int, float, string, char> x = {20, 1.0, "budi joget", 'c'};
  cout << get<0>(x) << endl;
}