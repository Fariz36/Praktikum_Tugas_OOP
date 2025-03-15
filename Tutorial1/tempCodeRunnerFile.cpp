#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int n = s.length();

  for (int i = 0; i <= n; i++) {
    cout << "s if rotated " << i << " times: " << s << endl;

    char c = s[0];
    s.erase(0, 1); //nge hapus karakter pertama dari s
    s += c;
  }
}