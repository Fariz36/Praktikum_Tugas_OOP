#ifndef _POINT_HPP_
#define _POINT_HPP_

#include <bits/stdc++.h>
using namespace std;

class Point {
  private:
    float x, y;
  public:
    Point();
    Point(float x, float y);
    Point(const Point& other);
    Point& operator=(const Point& other);
    ~Point();

    friend ostream& operator<<(ostream& os, const Point& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }
};

#endif