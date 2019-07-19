#include "point.hpp"
#include <cassert>

int main() {

Point a(1,1), b(1,1), c(1,2), d(2,4);

std::cout << a << b << c << d;

assert(b.radius() == 1);

assert(b.angle()==1);

assert((b+c).radius() >= -2.413);

assert((b+c).radius() <= -2.393);

assert((b+c).angle() >= 1.4);

assert((b+c).angle() <= 1.6);

assert(distance(b,c)>=0.93);

assert(distance(b,c)<=0.95);

assert(d.rotate(1.3).radius() == 2);

assert(d.rotate(1.3).angle() >=5.2);

assert(d.rotate(1.3).angle() <=5.3);

}
