#include "Point.hpp"

Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(float x, float y) {
    this->x = x;
    this->y = y;
}

Point::Point(const Point& other) {
    x = other.x;
    y = other.y;
}

Point& Point::operator=(const Point& other) {
    x = other.x;
    y = other.y;
    return *this;
}

Point::~Point() {
    // Do nothing
}