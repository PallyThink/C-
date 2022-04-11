#include "w1_head.h"

void ps::xuat()
{
    cout<<tu<<"/"<<mau<<endl;
};
    //constructor
ps::ps()
{
        tu = 0;
        mau =1;
};
ps::ps(int t,int m)
{
    tu=t;
    mau=m;
};
ps::ps(const ps& ps)
{
    tu=ps.tu;
    mau=ps.mau;
};