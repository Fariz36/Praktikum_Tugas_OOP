#include "Striker.hpp"
// Default constructor
// set atribut Footballer dengan nilai default,
// set goalScore dan shotsOnTarget ke 0, dan playPosition ke "striker"
// ...
Striker::Striker() : Footballer(), goalScore(0), shotsOnTarget(0) {
    playPosition = "striker";
}

// User-defined constructor
// parameter: string name, int birthYear, int goalScore, int shotsOnTarget
// set atribut dengan nilai parameter, playPosition tetap "striker"
// nationality, height, dan weight gunakan nilai default superclass
// ...
Striker::Striker(string name, int birthYear, int goalScore, int shotsOnTarget) : Footballer(), goalScore(goalScore), shotsOnTarget(shotsOnTarget) {
    playPosition = "striker";
    this->name = name;
    this->birthYear = birthYear;
}

// Getter dan Setter untuk goalScore
// setGoalScore(...)
int Striker::setGoalScore(int x) {
    this->goalScore = x;
    return this->goalScore;
}
// getGoalScore()
int Striker::getGoalScore() {
    return this->goalScore;
}


// Getter dan Setter untuk shotsOnTarget
// setShotsOnTarget(...)
int Striker::setShotsOnTarget(int x) {
    this->shotsOnTarget = x;
    return this->shotsOnTarget;
}
// getShotsOnTarget()
int Striker::getShotsOnTarget() {
    return this->shotsOnTarget;
}

// Method tambahan: menghitung conversion rate dalam persen
// conversionRate() = (goalScore / shotsOnTarget) * 100
// return dalam bentuk float
// Hint: Gunakan static_cast<float> untuk mengonversi int ke float
// ...
float Striker::conversionRate() {
    if (shotsOnTarget == 0) {
        return 0.0f; // Menghindari pembagian dengan nol
    }
    return static_cast<float>(goalScore) / shotsOnTarget * 100.0f;
}

// Override transferRate:
// rumus: 1.000.000 * goalScore + 10.000 * conversionRate()
// hasil berupa int
// ...
int Striker::transferRate() {
    return static_cast<int>(1000000 * goalScore + 10000 * conversionRate());
}

// Override displayInfo():
// Cetak info Footballer + atribut tambahan striker (goalScore, conversionRate)
// Format:
// Goals: <goalScore>
// Conversion Rate: <conversionRate>%

// Hint: Gunakan fixed dan setprecision(2) untuk menampilkan conversionRate
// Contoh: cout << fixed << setprecision(2) << conversionRate() << "%" << endl;
// ...
void Striker::displayInfo() {
    Footballer::displayInfo(); // Memanggil displayInfo() dari superclass

    cout << "Goals: " << goalScore << endl;
    cout << fixed << setprecision(2) << "Conversion Rate: " << conversionRate() << "%" << endl;
}
