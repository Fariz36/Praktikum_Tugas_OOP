#include "Jam.hpp"

Jam::Jam() {
    hour = 0;
    minute = 0;
    second = 0;
}

Jam::Jam(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
}

Jam::Jam(const Jam& other) {
    hour = other.hour;
    minute = other.minute;
    second = other.second;
}

Jam& Jam::operator=(const Jam& other) {
    hour = other.hour;
    minute = other.minute;
    second = other.second;
    return *this;
}

Jam::~Jam() {
}