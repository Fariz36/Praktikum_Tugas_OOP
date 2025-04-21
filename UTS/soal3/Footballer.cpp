#include "Footballer.hpp"
#include <bits/stdc++.h>

// Default cosntructor set nilai attribut sebagai berikut:
// name = "noname"; birthYear = 2000; playPosition = "none";
// nationality = "Indonesia"; height = 180, weight = 70
Footballer::Footballer() : name("noname"), birthYear(2000), playPosition("none"), nationality("Indonesia"), height(180), weight(70) {
    // this->name = "noname";
    // this->birthYear = 2000;
    // this->playPosition = "none";
    // this->nationality = "Indonesia";
    // this->height = 180;
    // this->weight = 70;
}

// User-defined constructor:
// set nilai atribut berdasarkan nilai parameter masukan
// dengan urutan: name, birthYear, playPosition, nationality, height, weight
Footballer::Footballer(string name, int birthYear, string playPosition, string nationality, int height, int weight) {
    this->name = name;
    this->birthYear = birthYear;
    this->playPosition = playPosition;
    this->nationality = nationality;
    this->height = height;
    this->weight = weight;
}



// Copy constructor
Footballer::Footballer(const Footballer& other) {
    this->name = other.name;
    this->birthYear = other.birthYear;
    this->playPosition = other.playPosition;
    this->nationality = other.nationality;
    this->height = other.height;
    this->weight = other.weight;
}

//Destructor
Footballer::~Footballer() {}

// Operator assignment
Footballer& Footballer::operator=(const Footballer& other) {
    this->name = other.name;
    this->birthYear = other.birthYear;
    this->playPosition = other.playPosition;
    this->nationality = other.nationality;
    this->height = other.height;
    this->weight = other.weight;

    return *this;
}

// Getter dan setter name
void Footballer::setName(string name) {
    this->name = name;
}

string Footballer::getName() {
    return this->name;
}

// Getter dan setter playPosition
void Footballer::setPlayPosition(string pos) {
    this->playPosition = pos;
}
string Footballer::getPlayPosition() {
    return this->playPosition;
}

// Getter dan setter nationality
void Footballer::setNationality(string nat) {
    this->nationality = nat;
}
string Footballer::getNationality() {
    return this->nationality;
}

//   Getter dan setter height and weight
void Footballer::setHeight(int h) {
    this->height = h;
}
int Footballer::getHeight() {
    return this->height;
}
void Footballer::setWeight(int w) {
    this->weight = w;
}
int Footballer::getWeight() {
   return this->weight;  
}

// gunakan CURRENT_YEAR untuk menghitung umur
int Footballer::getAge() {
    return CURRENT_YEAR - this->birthYear;
}

// gunakan height and weight untuk menghitung BMI
// BMI = weight(kg) / (height(m))²
float Footballer::getBMI() {
    float w = this->getWeight();
    float h = (float)this->getHeight() / 100;

    return (w / (h*h));
}

// gunakan BMI untuk mendapat category
// BMI < 18.5         -> Underweight
// 18.5 ≤ BMI < 25.0  -> Normal
// 25.0 ≤ BMI < 30.0  -> Overweight
// BMI ≥ 30.0         -> Obese
string Footballer::getCategory() {
    float BMI = this->getBMI();

    if (BMI < 18.5) return "Underweight";
    else if (BMI < 25.0) return "Normal";
    else if (BMI < 30.0) return "Overweight";
    else return "Obese";
}

// Mencetak informasi footballer dengan format sebagai berikut:
// Name: {name}
// Age: {hasil pemanggilan getAge()}
// Position: {playPosition}
// Nationality: {nationality}
// BMI: {<BMI> (<getCategory()>)}, BMI 2 angka di belakang koma, HINT: "cout << fixed << setprecision(2);"
// Transfer Rate: {hasil pemanggilan transferRate()}
void Footballer::displayInfo() {
    cout << "Nama: " << this->getName() << endl;
    cout << "Age: " << this->getAge() << endl;
    cout << "Position: " << this->getPlayPosition() << endl;
    cout << "Nationality: " << this->getNationality() << endl;
    cout << fixed << setprecision(2) << "BMI : " << this->getBMI() << " (" << this->getCategory() << ")" << endl;
    cout << "Transfer Rate: " << this->transferRate() << endl;
}

// Melakukan kalkulasi nilai transfer sesuai umur, playPosition, dan getCategory()
// transferRate() akan diimplementasikan oleh kelas anak Footballer
// yang ada di soal berikutnya. Gunakan tipe data integer.
int Footballer::transferRate() {
    return 200;
}


// int main() {
//     Footballer A("arsa", 2002, "keeper", "Netherland", 190, 65);
//     A.displayInfo();
// }