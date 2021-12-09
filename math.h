#pragma once
#include <iostream>
#include <map>
using namespace std;
    
static const int mon_days[2][12] = {
    { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 },
    { 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335 },
};
static int time_zone[25] = {-12, -11, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1 , 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};


int is_leap(long y);
long year_date(long y);
double sub(double first, double second);
double sum(double first, double second);
void to_date(double s, int offset);