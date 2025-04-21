#include "Kompleks.hpp"

Kompleks::Kompleks() : real(0), imag(0) {}              // Nilai default 0 + 0i
Kompleks::Kompleks(double r, double i) : real(r), imag(i) {}  // r + i*i
Kompleks::Kompleks(const Kompleks& other) : real(other.real), imag(other.imag) {}

double Kompleks::getReal() const {
    return real;
}

double Kompleks::getImag() const {
    return imag;
}

double Kompleks::setReal(double r) {
    this->real = r;
    return this->real;
}
double Kompleks::setImag(double i) {
    this->imag = i;
    return this->imag;
}

Kompleks Kompleks::operator+(const Kompleks& other) const {
    Kompleks res;
    res.setReal(this->getReal() + other.getReal());
    res.setImag(this->getImag() + other.getImag());

    return res;
}
// Menambahkan dua bilangan kompleks
// Misal: a = 1 + 2i, b = 3 + 4i;
// a + b = (1+3) + (2+4)i = 4 + 6i

Kompleks Kompleks::operator-(const Kompleks& other) const {
    Kompleks res;
    res.setReal(this->getReal() - other.getReal());
    res.setImag(this->getImag() - other.getImag());

    return res;
}
// Mengurangi dua bilangan kompleks
// Misal: a = 1 + 2i, b = 3 + 4i;
// a - b = (1-3) + (2-4)i = -2 - 2i

Kompleks Kompleks::operator*(const Kompleks& other) const {
    double r, i;
    r = this->getReal() * other.getReal() - this->getImag()*other.getImag();
    i = this->getReal() * other.getImag() + this->getImag() * other.getReal();

    return Kompleks(r, i);
}
// Mengalikan dua bilangan kompleks
// Misal: a = 1 + 2i, b = 3 + 4i;
// a * b = 1*3 + 1*4i + 2i*3 + 2i*4i = 3 + 4i + 6i - 8 = -5 + 10i

bool Kompleks::operator==(const Kompleks& other) const {
    return (this->getImag() == other.getImag() && this->getReal() == other.getReal());
}
// Membandingkan dua bilangan kompleks
// Misal: a = 1 + 2i, b = 3 + 4i;
// a == b = (1==3) && (2==4) = false
// Misal: a = 1 + 2i, b = 1 + 2i;
// a == b = (1==1) && (2==2) = true

Kompleks& Kompleks::operator=(const Kompleks& other) {
    this->setImag(other.getImag());
    this->setReal(other.getReal());

    return *this;
}
// Menyalin dua bilangan kompleks

ostream& operator<<(ostream& os, const Kompleks& c) {
    if (c.getImag() == 0) {
        cout << c.getReal();
    }
    else {
        if (c.getImag() < 0) {
            cout << c.getReal() << " - " << -1*c.getImag() << "i";
        }
        else {
            cout << c.getReal() << " + " << c.getImag() << "i";
        }
    }
    return os;
}
// Menampilkan bilangan kompleks
// Note: Tidak menggunakan endl
// Misal: Kompleks(1, 2)
// cout << a << endl; // Output: 1 + 2i
// Jika imajiner < 0; Misal: Kompleks(1, -2)
// cout << a << endl; // Output: 1 - 2i
// Jika nilai imajiner 0, jangan tampilkan i; Misal: Kompleks(1, 0)
// cout << a << endl; // Output: 1

// int main() {
//     Kompleks A(1, 2);
//     Kompleks B(3, -1);
//     Kompleks C = A*B;
//     Kompleks D(6.0, 0.0);

//     cout << A << endl;
//     cout << B << endl;
//     cout << C << endl;
//     cout << D << endl;
// }

