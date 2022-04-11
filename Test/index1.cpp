#include <iostream>
using namespace std;
int main()
{
    cout<<"ahihi"<<endl;
    // int *p; // khai báo con trỏ
    // p=new int; // cấp phát bộ nhớ cho con trỏ p
    // *p=100;// gán giá trị = 100 tại ô nhớ mà p đang trỏ tới
    // cout<<"dia tri tai con tro p = "<<p<<endl;
    // cout<<"gia tri tai con tro p = "<<*p<<endl;
    // toán tử dấu &
    // dấu & chỉ địa chỉ của biến
    int count=100;
    int *m=&count;
    cout<<"dia chi cua bien count = "<<&count<<endl; 
    cout<<"gia tri cua bien count = "<<count<<endl;
    cout<<"dia chi cua con tro m = "<<m<<endl;
    cout<<"gia tri cua con tro m dang tro toi : "<<*m<<endl;
    cout<<"ahihi       "<<&m<<endl;
    // toán tử dấu *
    // dấu * chỉ giá trị của biến
    int p=*m;
    cout<<"gia tri cua p la : "<<p;
    int *x=m;
    cout<<"\ndia chi cua con tro x = "<<x<<endl;
    cout<<"gia tri cua con tro x dang tro toi : "<<*x<<endl;
    *x=15;
    cout<<"gia tri cua con tro m dang tro toi : "<<*m<<endl;
    cout<<"Gia tri cua bien count = "<<count<<endl;
    char ch;
    ch='Z';
    char *chp;
    chp=&ch;
    cout<<"2   "<<chp<<endl;
    cout<<"3    "<<*chp<<endl;
    cout<<"4    "<<&chp<<endl;
    // delete m;
    // delete p;  // nên đóng lại. bị lỗi memory leak nếu không thu hồi bộ nhớ
    
    return 0;
}