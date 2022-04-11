#include "fraction.h"

void fraction::print()
{
    cout<<tu<<"/"<<mau<<endl;
}
fraction::fraction(int x, int y)
{
    tu=x;
    mau=y;
}
fraction::fraction(){
    tu=0;
    mau=1;
    fraction::dem+=1; // cong them 1 r gan lai
}
fraction::fraction(const fraction& a)
{
    tu=a.tu;
    mau=a.mau;
}

const int fraction::get_tu(){
    return tu;
}
const int fraction::get_mau(){
    return mau;
}

//OPERATOR
fraction fraction::operator=(const fraction&x)
{
    tu=x.tu;
    mau=x.mau;
    return *this;
}
bool fraction::operator==(const fraction& val)
{
    float val1=tu*1.0/mau;
    float val2=val.tu*1.0/val.mau;
    if(val1==val2)
        return true;
    else
        return false;    
}
istream& operator>>(istream& is,fraction& self)
{
    cout<<"nhap tu so: ";
    is>>self.tu;
    cout<<"nhap mau so: ";
    is>>self.mau;
    return is;
}
ostream& operator<<(ostream& os,const fraction& self)
{
    os<<self.tu<<"/"<<self.mau;
    return os;
}
bool fraction::operator>(const fraction & ps)
{
    float ps1=tu/mau;
    float ps2=ps.tu/ps.mau;
    if(ps1>ps2)
        return true;
    else
        return false;
}

bool fraction::operator<=(const fraction& ps)
{
    if(*this > ps)
        return false;
    else
        return true;
}

fraction fraction::operator++() 
{
    this->tu += this->mau;
    return *this;
}
// postfix with dummy variable ~ a++(int)
fraction fraction::operator++(int n) 
{
    fraction temp=*this;
    // a=10
    // temp=10
    ++(*this); // a=11
    return temp; // tra ve va xai 10
}

fraction::operator float() const 
{
    return 1.0*tu/mau;
}
//list fraction class