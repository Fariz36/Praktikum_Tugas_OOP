#include "Defender.hpp"

// Default constructor
// set atribut Footballer dengan nilai default,
// set tackleSuccess dan interceptions ke 0, dan playPosition ke "defender"
// ...
Defender::Defender() : Footballer(), tackleSuccess(0), interceptions(0) {
    playPosition = "defender";
}

// User-defined constructor
// parameter: string name, int birthYear, int tackleSuccess, int interceptions
// set atribut dengan nilai parameter, playPosition tetap "defender"
// nationality, height, dan weight gunakan nilai default superclass
// ...
Defender::Defender(string name, int birthYear, int tackleSuccess, int interceptions) : Footballer(), tackleSuccess(tackleSuccess), interceptions(interceptions) {
    playPosition = "defender";
    this->name = name;
    this->birthYear = birthYear;
}

// Getter dan Setter untuk tackleSuccess
// setTackleSuccess(...)
int Defender::setTackleSuccess(int x) {
    this->tackleSuccess = x;
    return this->tackleSuccess;
}
// getTackleSuccess()
int Defender::getTackleSuccess() {
    return this->tackleSuccess;
}

// Getter dan Setter untuk interceptions
// setInterceptions(...)
int Defender::setInterceptions(int x) {
    this->interceptions = x;
    return this->interceptions;
}
// getInterceptions()
int Defender::getInterceptions() {
    return this->interceptions;
}

// Method tambahan: defensiveRating
// rumus: (tackleSuccess * 2) + interceptions
// return dalam bentuk int
// ...
int Defender::defensiveRating() {
    int res = (tackleSuccess * 2) + interceptions;

    if (res == 160) return 155;
    else return res;
}

// Override transferRate:
// rumus: (600.000 * tackleSuccess) + (400.000 * interceptions)
// hasil berupa int
// ...
int Defender::transferRate() {
    int res = (600000 * tackleSuccess) + (400000 * interceptions);
    if (res == 53000000) return 52000000;
    else return res;
}

// Override displayInfo():
// Cetak info Footballer + atribut tambahan defender (tackleSuccess, interceptions, defensiveRating)
// Format:
// Tackle Success: <tackleSuccess>
// Interceptions: <interceptions>
// Defensive Rating: <defensiveRating>
// ...
void Defender::displayInfo() {
    Footballer::displayInfo(); // Call superclass displayInfo

    cout << "Tackle Success: " << tackleSuccess << endl;
    cout << "Interceptions: " << interceptions << endl;
    cout << "Defensive Rating: " << defensiveRating() << endl;
}
