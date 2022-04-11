#include "sach.h"

void book::input()
{
    cout<<"Names : ";
    fflush(stdin);
    gets(Name);
    cout<<"Pages : ";
    cin>>pages;
}
void book::output()
{
    cout<<"Name : "<<Name;
    cout<<"\nAmount of pages "<<pages<<endl;
}

void textbook::input()
{
    book::input();
    cout<<"Author : ";
    fflush(stdin);
    gets(NXB);
}
void textbook::output()
{
    cout<<"Text book :\n";
    book::output();
    cout<<"Author: "<<NXB<<endl;
}

void Theory::input()
{
    book::input();
    cout<<"Author : ";
    fflush(stdin);
    gets(author);
}
void Theory::output()
{
    cout<<"Theory book :\n";
    book::output();
    cout<<"Author: "<<author<<endl;
}

void Magazine::input()
{
    book::input();
    cout<<"Date create : ";
    cin>>DateCreate;
}
void Magazine::ouput()
{
    cout<<"Magazine: \n";
    book::output();
    cout<<"Date : "<<DateCreate<<endl;
}
