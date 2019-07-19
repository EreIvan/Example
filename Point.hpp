#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>

class Point {
public:
double r_, p_;
public:
Point();
Point(double ir, double ip);
double radius() const;
double angle() const;
Point rotate (double alpha);
Point operator +(Point b);

 friend std::ostream& operator << (std::ostream& out, Point c);

};

 double distance(Point a, Point b);

#endif POINT_HPP
