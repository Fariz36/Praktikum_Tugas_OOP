#include <bits/stdc++.h>
using namespace std;

#include "Footballer.hpp"
#include "Striker.hpp"
#include "Defender.hpp"
#include "Goalkeeper.hpp"
#include "Midfielder.hpp"

int main() {
  Defender d1;
  d1.displayInfo();

  Defender d2("Ramos", 1986, 45, 50);
  d2.displayInfo();

  cout << "======================" << endl;

  d2.setTackleSuccess(55);
  d2.displayInfo();
}