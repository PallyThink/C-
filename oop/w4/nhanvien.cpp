#include "nhanvien.h"
void nhanvien::nhap()
{
    cout<<"Nhap ho ten";
    getline(cin,strHoTen);
    cout<<"Nhap ngay sinh ";
    cin>>strNgaySinh;
    // cout<<"Nhap luong ";
    // cin>>fLuong;
}
void nhanvien::xuat()
{
    cout<<"Ho ten: "<<strHoTen;
    cout<<"\nNgay sinh: "<<strNgaySinh;
    cout<<"\nLuong: "<<fLuong<<endl;
}

void nvSanxuat::nhap()
{
    nhanvien::nhap();
    cout<<"Nhap so san pham ";
    cin>>products;
}
void nvSanxuat::xuat()
{
    nhanvien::xuat();
    cout<<"So san pham: "<<products<<endl;
}
float nvSanxuat::tinhluong() 
{
    return fLuong+products*5000;
}
void nvVanphong::nhap()
{
    nhanvien::nhap();
    cout<<"Nhap so ngay lam viec ";
    cin>>songaylamviec;   
}
void nvVanphong::xuat()
{
    nhanvien::xuat();
    cout<<"So ngay lam viec: "<<songaylamviec<<endl;
}
float nvVanphong::tinhluong()
{
    return songaylamviec*100000;
}