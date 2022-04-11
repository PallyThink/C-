// Inheritance : ke thua
#include <iostream>
#include <string>
#include <vector>

using namespace std;


class giaovien
{
protected:
    string hoTen;
    int mucluong;
    int songayNghi;
public:
    void nhap();
    void xuat();
    int tinhluong();

};
void giaovien::nhap()
{

    cout<<"nhap ho ten: ";
    getline(cin,hoTen);
    cout<<"So ngay nghi : ";
    cin>>songayNghi;
    cout<<"Muc luong: ";
    cin>>mucluong;
    cin.ignore(32767,'\n');
}
void giaovien::xuat()
{
    printf("Ho ten : %s\nSo ngay nghi %d\nMuc luong : %d\n",hoTen,songayNghi,mucluong);
}
int giaovien::tinhluong()
{
    return mucluong-(songayNghi*10000);
}

class giaovienCN : public giaovien
{
    string lopchunhiem;
public:
    void nhap();
    void xuat();
    int tinhluong();
};

void giaovienCN::nhap()
{
    giaovien::nhap();
    cout<<"Nhap lop chu nhiem: ";
    getline(cin,lopchunhiem);
    //cin.ignore(32767,'\n');
}
void giaovienCN::xuat()
{
    giaovien::xuat();
    cout<<"Lop chu nhiem: "<<lopchunhiem<<endl;
}
int giaovienCN::tinhluong()
{
    return giaovien::tinhluong()+50000;
}

class fit 
{
    vector<giaovien> dsgv;
    vector<giaovienCN> dsgvcn;
public:
    void nhap(){
        cout<<"nhap so luong GV : ";
        int temp1=0;
        cin>>temp1;
        for (int i = 0; i < temp1; i++)
        {
            giaovien gv;
            gv.nhap();
            dsgv.push_back(gv);
        }
        cout<<"nhap so luong GVCN : ";
        int temp2=0;
        cin>>temp2;
        for (int i = 0; i < temp2; i++)
        {
            giaovienCN gvcn;
            gvcn.nhap();
            dsgv.push_back(gvcn);
        }
    }
    void xuat()
    {
        for(int i=0;i<dsgv.size();i++)
        {
            dsgv[i].xuat();
        }
        for(int i=0;i<dsgvcn.size();i++)
        {
            dsgvcn[i].xuat();
        }
    }
};
int main()
{
    //cout<<"\n";
    giaovien gv1;
    gv1.nhap();
    cout<<gv1.tinhluong()<<endl;
    giaovienCN gv2;
    gv2.nhap();
    cout<<gv2.tinhluong()<<endl;
    giaovien gv3;
    gv3.nhap();
    cout<<gv3.tinhluong()<<endl;
    int x;
    return 0;
}