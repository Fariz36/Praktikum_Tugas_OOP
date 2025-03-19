#ifndef _JAM_HPP_
#define _JAM_HPP_

#include <bits/stdc++.h>
using namespace std;

class Jam {
    public:
        int hour;
        int minute;
        int second;
    public:
        Jam();
        Jam(int h, int m, int s);
        Jam(const Jam& other);
        Jam& operator=(const Jam& other);
        ~Jam();


        friend Jam min(Jam& j1, Jam& j2) {
            if (j1.hour < j2.hour) {
                return j1;
            } else if (j1.hour > j2.hour) {
                return j2;
            } else {
                if (j1.minute < j2.minute) {
                    return j1;
                } else if (j1.minute > j2.minute) {
                    return j2;
                } else {
                    if (j1.second < j2.second) {
                        return j1;
                    } else {
                        return j2;
                    }
                }
            }
        }
        friend ostream& operator<<(ostream& os, const Jam& j) {
            os << j.hour << ":" << j.minute << ":" << j.second;
            return os;
        }
};

#endif