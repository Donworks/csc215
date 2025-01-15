#include <iostream>
#include <cmath>
using namespace std;

struct Time {
    int hour, minute;
    double second;

    Time();
    Time(int Hour, int minute, double second);

    void print_time();
    Time add_time(Time& t1);
};
