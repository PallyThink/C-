#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class CHocSinh 
{
private:
    string MSSV, hoTen, diaChi;
    float van, toan;
public:
    //constructor
    CHocSinh(const CHocSinh& CHocSinh);
    CHocSinh(const string& ms,const string& ht,const string& adr,const float& v,const float& t);
    //getter
    string Name () const;
    float DTB() const;
    // friend istream& operator>>(istream&, CHocSinh&);
    // friend ostream& operator<<(ostream&, const CHocSinh&);
    // //destructor
    // ~CHocSinh();
};
CHocSinh::CHocSinh(const CHocSinh& CHocSinh)
{
    MSSV=CHocSinh.MSSV;
    hoTen=CHocSinh.hoTen;
    diaChi=CHocSinh.diaChi;
    van=CHocSinh.van;
    toan=CHocSinh.toan;
};
CHocSinh::CHocSinh(const string& ms,const string& ht,const string& adr,const float& v,const float& t)
    {
        MSSV=ms;
        hoTen=ht;
        diaChi=adr;
        van=v;
        toan=t;
    };
string CHocSinh::Name() const
{
    return hoTen;
};
float CHocSinh::DTB() const 
{        
    return (van+toan)/2;
};
// bool compare(const CHocSinh& list,const CHocSinh& rlist)
// {
//     return list.Name() < rlist.Name();
// };
int main()
{
    cout << "Nhap so luong học sinh: ";
    int n=3;
    // cin >> n;
    vector<CHocSinh> ds(3);
    // for (int i = 0;i<n; i++)
    //     cin >> ds[i];
    //max score
    CHocSinh hs1("1","a","A",5,5);
    CHocSinh hs2("2","b","B",6,6);
    CHocSinh hs3("3","c","C",7,7);
    ds.push_back(hs1);
    ds.push_back(hs2);
    ds.push_back(hs3);
    CHocSinh maxScore = ds[0];
    for (int i = 1;i< n; +i)
    {
        if (maxScore.DTB() < ds[i].DTB())
            maxScore = ds[i];
    };
    cout<<maxScore.DTB();
    //sort
    //sort(ds.begin(), ds.end(), compare);
    return 0;
}