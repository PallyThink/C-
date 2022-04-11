#include "fraction.h"
// static member // thanh phan tinh
// + luong co ban
// + cac cai tien ich cho class
int fraction::dem=0;

int main()
{
    fraction a,b,c;
    cin>>a;
    cin>>b;
    c=a+b; 
    cout<<"tong : "<<c<<endl;
    if(a==b)
        cout<<"a=b"<<endl;
    else
        cout<<"a!=b"<<endl;

    // Carr<int> a;
    // a.input();
    // cout<<a.get_element(0);

    fraction c1;
    fraction c2;
    cout<<fraction::dem;
    return 0;
    
}