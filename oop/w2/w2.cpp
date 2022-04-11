#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;

class ps{
    int tu;
    int mau;
public:
    void nhap();
    void xuat(){
        cout<<tu<<"/"<<mau<<endl;
    };

    //constructor
    ps(){
        tu = 0;
        mau =1;
    };
    ps(int t,int m){
        tu=t;
        mau=m;
    }
    ps(const ps& ps){
        tu=ps.tu;
        mau=ps.mau;
    }
    //destructor
    ~ps(){
        cout<<"deleted !"<<endl;
    }
};


int main()
{
    // // vector
    // vector<int> coll;
    // // append elements with values 1 to 6
    // for (int i=1; i<=6; ++i) {
    //     coll.push_back(i);
    // }
    // // print all elements followed by a space
    // for (int i=0; i<coll.size(); ++i) {
    //     cout << coll[i] << ' ';
    // }
    // cout << endl;
    {
        ps ps1;
        ps ps2(1,2);
        ps ps3(ps2);
        
        vector<ps> list;
        list.push_back(ps1);
        list.push_back(ps2);
        list.push_back(ps3);
        for (int i = 0; i < list.size(); i++)
        {
            list[i].xuat();
        }
    }
    return 0;
}