#include "Goalkeeper.hpp"

// Default constructor
// set atribut Footballer dengan nilai default,
// set cleanSheets, saves, totalShotsOnGoal ke 0, playPosition ke "goalkeeper"
// ...
Goalkeeper::Goalkeeper() : Footballer(), cleanSheets(0), saves(0), totalShotsOnGoal(0) {
    playPosition = "goalkeeper";
}

// User-defined constructor
// parameter: string name, int birthYear, int cleanSheets, int saves, int totalShotsOnGoal
// set atribut dengan nilai parameter, playPosition tetap "goalkeeper"
// nationality, height, dan weight gunakan nilai default superclass
// ...
Goalkeeper::Goalkeeper(string name, int birthYear, int cleanSheets, int saves, int totalShotsOnGoal) : Footballer(), cleanSheets(cleanSheets), saves(saves), totalShotsOnGoal(totalShotsOnGoal) {
    playPosition = "goalkeeper";
    this->name = name;
    this->birthYear = birthYear;
}

// Getter dan Setter untuk cleanSheets
// setCleanSheets(...)
int Goalkeeper::setCleanSheets(int x) {
    this->cleanSheets = x;
    return this->cleanSheets;
}
// getCleanSheets()
int Goalkeeper::getCleanSheets() {
    return this->cleanSheets;
}

// Getter dan Setter untuk saves
// setSaves(...)
int Goalkeeper::setSaves(int x) {
    this->saves = x;
    return this->saves;
}
// getSaves()
int Goalkeeper::getSaves() {
    return this->saves;
}

// Getter dan Setter untuk totalShotsOnGoal
// setTotalShotsOnGoal(...)
int Goalkeeper::setTotalShotsOnGoal(int x) {
    this->totalShotsOnGoal = x;
    return this->totalShotsOnGoal;
}
// getTotalShotsOnGoal()
int Goalkeeper::getTotalShotsOnGoal() {
    return this->totalShotsOnGoal;
}

// Method tambahan: savePercentage
// rumus: (saves / totalShotsOnGoal) * 100
// return dalam bentuk float
// ...
float Goalkeeper::savePercentage() {
    if (totalShotsOnGoal == 0) {
        return 0.0; // Menghindari pembagian dengan nol
    }
    return (static_cast<float>(saves) / totalShotsOnGoal) * 100;
}

// Override transferRate:
// rumus: (700.000 * cleanSheets) + (50.000 * saves)
// hasil berupa int
// ...
int Goalkeeper::transferRate() {
    return (700000 * cleanSheets) + (50000 * saves);
}

// Override displayInfo():
// Cetak info Footballer + atribut tambahan goalkeeper (cleanSheets, saves, savePercentage)
// Format:
// Clean Sheets: <cleanSheets>
// Saves: <saves>
// Save Percentage: <savePercentage>%
void Goalkeeper::displayInfo() {
    Footballer::displayInfo(); // Panggil method dari superclass
    cout << "Clean Sheets: " << cleanSheets << endl;
    cout << "Saves: " << saves << endl;
    cout << fixed << setprecision(2) << "Save Percentage: " << savePercentage() << "%" << endl;
}

// Hint: Gunakan fixed dan setprecision(2) untuk menampilkan conversionRate
// Contoh: cout << fixed << setprecision(2) << conversionRate() << "%" << endl;
// ...