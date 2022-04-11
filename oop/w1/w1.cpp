#include <iostream>
using namespace std;

class diem2d
{
private:
    float x;
    float y;
public:
    diem2d();
    void move(float x,float y);
    void output();
    
    float get_x() 
    {
        return x;
    }
    float get_y()
    {
        return y;
    }
    //setter ?
    void set_y(int y)
    {
        this->y=y;
    }
};

diem2d::diem2d()
{
    this->x=0;
    this->y=0;
}
void diem2d::move(float x, float y)
{
    this->x=x;
    this->y=y;
}
void diem2d::output()
{
    cout << "(" << this->x << "," << this->y << ")"<<endl;
}

class Circle
{
private:
    float r;
    diem2d ct;

public:
    void output()
    {
        cout<<"Ban kinh R : "<<r;
        cout<<" Tam : ";
        ct.output();
    }
    // void init()
    // {
    //     ct.init();
    //     ct.move(2,2);
    //     r=3;
    // }
    float CV()
    {
        return r*2*3.14;
    }
};

int ucln(int a,int b)
{
    while (a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;    
}

class ps
{
private:
    int tu;
    int mau;
public:
    void init(){
        tu=0;
        mau=0;
    }
    int get_tu(){
        return tu;
    }
    int get_mau(){
        return mau;
    }
    void set_tu(int x){
        tu=x;
    }
    void set_mau(int y){
        mau=y;
    }
    void print(){
        cout<<tu<<"/"<<mau<<endl;
    }
    void reverse(){
        tu=tu/ucln(tu,mau);
        mau=mau/ucln(tu,mau);
        tu=mau + tu;
        mau = tu - mau;
        tu = tu - mau;
    }
};

class carr
{
    int *a=nullptr;
    int n;
public:
    void init(){
        cout<<"input N : ";
        int n=0;
        cin>>n;
        this->n=n;
        a=new int[this->n];
        for(int i=0;i<n;i++)
        {
            cout<<"a["<<i<<"]=";
            cin>>*(a+i);
        }
    }
    void print(){
        for (int i = 0; i < n; i++)
        {
            cout<<*(a+i)<<" ";
        }
        cout<<endl;
    }
    int get_length(){
        return n;
    }
    int get_val(int index);
    int set_val(int index);
    bool check(int x);
    int max();
    int min();
    void sort();
};
int main()
{
    // {
    //     diem2d p;
    //     p.init();
    //     p.output();
    //     cout<<p.get_x()<<endl;
    //     p.set_y(4);
    //     p.output();
    // }
    // {
    //     diem2d* ptr=new diem2d();
    //     if(ptr!=nullptr)
    //     {
    //         ptr->init();
    //         ptr->output();
    //         delete ptr;
    //         ptr=nullptr;
    //     }
    // }
    // {
    //     Circle c1;
    //     c1.init();
    //     c1.output();
    //     cout<<"Chu vi : "<<c1.CV()<<endl;
    // }
    // {
    //     ps a;
    //     a.init();
    //     a.set_tu(3);
    //     a.set_mau(5);
    //     a.print();
    //     a.reverse();
    //     a.print();
    // }
    {
        carr a;
        a.init();
        cout<<a.get_length()<<" : ";
        a.print();
    }
    return 0;
}   