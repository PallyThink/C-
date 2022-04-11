#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class Dpoint
{
private:
	int hoanhdo;
	int tungdo;
public:
	Dpoint()
	{
		hoanhdo=0;
		tungdo=0;
	}  // khoi tao

	void set_hoanh(const int & x)
	{
		hoanhdo=x;
	}
	void set_tung(const int & y)
	{
		tungdo=y;
	}
	int get_hoanh() const
	{
		return hoanhdo;
	}
	int get_tung() const
	{
		return tungdo;
	}
	Dpoint tinhtien(int x, int y)
	{
		hoanhdo=hoanhdo+x;
		tungdo=tungdo+y;
		return *this;
	}
	void print()
	{
		cout<<hoanhdo<<","<<tungdo;
	}

};




class xy
{
private:
	int x;
	int y;
public:
	void set_xy(const int & a,const int & b){
		x=a;
		y=b;
	}
	int get_x()
	{
		return x;
	}
	int get_y()
	{
		return y;
	}
};
class list
{
private:
	vector<xy> li;
public:
	int n;
	list(){
		int a=0;
		int b=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a>>b;
			xy temp;
			temp.set_xy(a,b);
			li.push_back(temp);
		}
	}
	xy get_min_xy(){
		int minx=li[0].get_x();
		int miny=li[0].get_y();
		for(int i=0;i<sizeof(li)/sizeof(xy);i++)
		{	
			if(minx>li[i].get_x())
				int min=li[i].get_x();
			if(miny>li[i].get_x())
				int min=li[i].get_x();
		}
		xy rl;
		rl.set_xy(minx,miny);
		return rl;
	}
	xy get_max_xy(){
		int maxx=li[0].get_x();
		int maxy=li[0].get_y();
		for(int i=0;i<sizeof(li)/sizeof(xy);i++)
		{	
			if(maxx<li[i].get_x())
				maxx=li[i].get_x();
			if(maxy<li[i].get_x())
				maxy=li[i].get_x();
		}
		xy rl;
		rl.set_xy(maxx,maxy);
		return rl;
	}
};

int main()
{
	


	return(0);
}