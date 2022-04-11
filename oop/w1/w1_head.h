#ifndef w1_head_h
#define w1_head_h
#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;

class ps{
    int tu;
    int mau;
public:
    void nhap();
    void xuat();
    //constructor
    ps();
    ps(int t,int m);
    ps(const ps& ps);
    //destructor
    ~ps(){
        cout<<"deleted !"<<endl;
    }
};
#endif