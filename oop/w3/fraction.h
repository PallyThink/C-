#pragma once
#include <iostream>
#include <vector>
#include <math.h>
#include <cstdlib>
#include <cstdio>
#include <string>

using namespace std;
int GCD(int a,int b);

class fraction
{
private:
    int tu,mau;
public:
    fraction(int , int);
    fraction();
    fraction(const fraction&);
    // ~fraction();
    void print();
    //get
    const int get_tu();
    const int get_mau();
    
    //static
    static int dem;

    // operator
    fraction operator+(const fraction& x);
    // fraction operator-(const fraction&); //tru
    // fraction operator*(const fraction&); //nhan
    // fraction operator/(const fraction&); //chia
    fraction operator=(const fraction&); //gan
    bool operator==(const fraction&); // so sanh 
    bool operator>(const fraction&); // so sanh 
    // bool operator<(const fraction&); // so sanh 
    // bool operator>=(const fraction&); //so sanh
    bool operator<=(const fraction&); //so sanh
    //Toan tu nhap
    friend istream& operator>>(istream&,fraction&);
    friend ostream& operator<<(ostream&, const fraction&);
    // prefix ~ ++a
    fraction operator++();
    // postfix with dummy variable ~ a++(int)
    fraction operator++(int n);

    operator float() const;
};

class listoffraction
{
private:
    vector<fraction> list;
public:
    // get negative fraction method
    vector<fraction> negativefractions();
};
vector<fraction> listoffraction::negativefractions()
{
    vector<fraction> negativefraction;
    for(int i=0;i<list.size();i++)
    {
        if(list[i].get_mau() * list[i].get_tu() < 0)
            negativefraction.push_back(list[i]);
    }
    return negativefraction;
}

template <class T>
class Carr
{
private:
    T* list;
    int slg;
public:
    Carr(){
        list=new T[3];
        slg=3;
    }
    T get_element(int index)
    {
        return list[index];  // check index
    }
    void input()
    {
        cout<<"N: ";
        cin>>slg;
        list=new T[slg];
        for (int i = 0; i < slg; i++)
        {
            cin>>list[i];
        }        
    }
};