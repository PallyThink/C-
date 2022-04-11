#include <cmath>
#include<iostream>
using namespace std;
class CSoPhuc{
    private:
        int thuc, ao;
    public:
        CSoPhuc ();
        float dodai() const;
        int Thuc();
        int Ao();
        CSoPhuc operator +(const CSoPhuc &x);
        CSoPhuc operator - (const CSoPhuc& x);
        CSoPhuc operator *(const CSoPhuc& x);
        CSoPhuc operator /(const CSoPhuc& x);
        bool operator<(const CSoPhuc &x);
        bool operator<=(const CSoPhuc &x);
        bool operator>(const CSoPhuc &x);
        bool operator>=(const CSoPhuc &x);
        bool operator==(const CSoPhuc& x);
        bool operator !=(const CSoPhuc&x);

        // prefix ~ ++a
        CSoPhuc operator++();
        //CSoPhuc operator++(int n);
        operator float() const;
        friend ostream& operator<<(ostream& out, const CSoPhuc &a);
        friend istream& operator>>(istream& in, CSoPhuc &a);
        
        ~CSoPhuc (void);
};
ostream &operator<<(ostream &out, const CSoPhuc &a)
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

istream &operator>>(istream &in, CSoPhuc &a)
{
    cout<<"Phan thuc= ";
        in>>a.thuc;
    cout<<"Phan ao= ";
        in>>a.ao;
    return in;
}


int main()
{

    


    return 0;
}