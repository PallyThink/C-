#include "nhanvien.h"
float nhanvien::fLuong=300000;
int main()
{
    nhanvien nv;
    nv.nhap();
    nv.xuat();

    nvSanxuat nvsx;
    nvsx.nhap();
    nvsx.tinhluong();
    nvsx.xuat();

    nvVanphong nvvp;
    nvvp.nhap();
    nvvp.tinhluong();
    nvvp.xuat();

    return 0;
}