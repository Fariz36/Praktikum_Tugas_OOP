#include "Weed.hpp"
#include <bits/stdc++.h>
using namespace std;

Weed::Weed() {
    this->many = 1;
}

Weed::Weed(int n) {
    this->many = n;
}

Weed::Weed(const Weed& other) {
    this->many = other.many;
}

Weed::~Weed(){
}

void Weed::step() {
    for (int i = 1; i <= this->many; i++) {
        cout << "kresek...";
    }
    cout << endl;
}

