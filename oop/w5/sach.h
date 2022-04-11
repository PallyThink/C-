#pragma once
#include <iostream>

using namespace std;

class book
{
protected:
    char Name[100];
    int pages;
public:
    virtual void input();
    virtual void output();    
};

class textbook: public book
{
protected:
    char NXB[100];
public:
    void input();
    void output();
};

class Theory: public book
{
protected:
    char author[100];
public:
    void input();
    void output();
};
class Magazine:public book
{
protected:
    int DateCreate;
public:
    void input();
    void ouput();
};