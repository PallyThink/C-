#pragma once
#include <cmath>
#include<iostream>

using namespace std;
class SoPhuc{
    private:
        float thuc, ao;
    public:
        SoPhuc ();
        SoPhuc (float x,float y);
        SoPhuc (const SoPhuc & x);
        // float dodai() const;
        // int Thuc();
        // int Ao();
        SoPhuc operator +(const SoPhuc &x);
        SoPhuc operator - (const SoPhuc& x);
        SoPhuc operator *(const SoPhuc& x);
        SoPhuc operator /(const SoPhuc& x);
        // bool operator<(const SoPhuc &x);
        // bool operator<=(const SoPhuc &x);
        // bool operator>(const SoPhuc &x);
        // bool operator>=(const SoPhuc &x);
        bool operator==(const SoPhuc& x);
        bool operator !=(const SoPhuc&x);

        // prefix ~ ++a
        SoPhuc & operator++();
        SoPhuc operator++(int n);
        operator float() const;
        friend ostream& operator<<(ostream& out, const SoPhuc &a);
        friend istream& operator>>(istream& in, SoPhuc &a);
        
        // ~CSoPhuc (void);
};
