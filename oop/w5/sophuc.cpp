#include "sophuc.h"

ostream &operator<<(ostream &out, const SoPhuc &a)
{
    if(a.thuc==0 && a.ao!=0)
        out<<a.ao<<"i"<<endl;
    else if(a.ao== 0 && a.thuc!=0)
        out<<a. thuc<<endl;
    else if(a.thuc==0 && a.ao==0)
        out<<0<<endl;
    else
        out<<a.thuc<<((a.ao>0)?"+":"-")<<abs(a.ao)<<"i"<<endl;
    return out;
}

istream &operator>>(istream &in, SoPhuc &a)
{
    cout<<"Phan thuc= ";
        in>>a.thuc;
    cout<<"Phan ao= ";
        in>>a.ao;
    return in;
}

SoPhuc::SoPhuc()
{
    thuc=ao=1;
}
SoPhuc::SoPhuc(float x,float y)
{
    thuc=x;
    ao=y;
}
SoPhuc::SoPhuc(const SoPhuc & x)
{
    thuc=x.thuc;
    ao=x.ao;
}

SoPhuc SoPhuc::operator+(const SoPhuc &x)
{
    SoPhuc temp;
    temp.ao=ao+x.ao;
    temp.thuc=thuc+x.thuc;
    return temp;
}
SoPhuc SoPhuc::operator-(const SoPhuc& x)
{
    SoPhuc temp;
    temp.ao=ao-x.ao;
    temp.thuc=thuc-x.thuc; 
    return temp;  
}

SoPhuc SoPhuc::operator*(const SoPhuc& x)
{
    SoPhuc temp;
    temp.thuc =thuc*x.thuc - ao*x.ao;
    temp.ao=thuc*x.ao+ao*x.thuc;
    return temp;
}

// SoPhuc operator /(const SoPhuc& x);