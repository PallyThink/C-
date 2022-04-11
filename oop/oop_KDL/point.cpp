#include "point.h"
#include <math.h>
point::point(const int& a,const int & b)
{
    x=a;
    y=b;
}
point::point()
{
    x=y=0;
}
float point::distance() const
{
    return sqrt(x*x+y*y);
}

point::~point()
{
}
