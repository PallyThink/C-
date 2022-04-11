#pragma once
#include <iostream>
#include <string>
using namespace std;
class nhanvien
{
protected:
    string strHoTen;
    string strNgaySinh;
public:
    static float fLuong;
    void nhap();
    void xuat();
};
class nvSanxuat : public nhanvien
{
private:
    int products;
    float luongcb;
public:
    void nhap();
    void xuat();
    float tinhluong();
};

class nvVanphong:public nhanvien
{
    int songaylamviec;
public:
    void nhap();
    void xuat();
    float tinhluong();
};