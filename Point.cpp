#include<cmath>

#include"point.hpp"

#include<cassert>

#include<iostream>


Point::Point() : r_(0), p_(0) {}
Point::Point(double ir, double ip) {
  assert(ip < 6.29);
  r_ = ir;
  p_ = ip;
}
  double Point::radius() const {
    return r_;
  }
    double Point::angle() const {
     return p_;
    }
Point Point::rotate(double alpha) {
  Point turn;
  turn.r_ = r_;
  turn.p_ = p_ + alpha;
  return turn;
}

double distance(Point a, Point b){
 double dist = 0;
 double prax = a.r_*cos(a.p_);
 double pray = a.r_*sin(a.p_);
 double prbx = b.r_*cos(b.p_);
 double prby = b.r_*sin(b.p_);
   dist = sqrt((prax - prbx)+(pray-prby));
   return dist;
}

Point Point::operator +(Point b){
  double r1,p1;
  r1= r_/cos(b.p_);
  p1=((p_ - b.p_)/2) + b.p_;
  return Point(r1,p1);
}
   std::ostream& operator <<(std::ostream& out, Point c) {
    out << c.r_ << " " << c.p_ << '\n';
    return out;
}

