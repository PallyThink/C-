#pragma once 
#include <iostream>

class point
{
private:
    int x;
    int y;
public:
    point();
    point(const int& a,const int & b);
    ~point();

    float distance() const;
};