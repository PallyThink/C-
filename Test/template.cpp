/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
[
]
template
###End banned keyword*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

struct thoigian
{
	int ngay;
	char thang[20];
	int nam;
};
struct sanpham
{
	char tensp[250];
	char noisx[250];
	int loaisp;
	thoigian ngaysx;
};
struct node
{
	sanpham info;
	node *pnext;
};
struct list
{
	node *phead;
	node *ptail;
};

int main()
{
	cout<<"ahihi\n";
	int* a = new int;
	
	return 0;
}
//###INSERT CODE HERE -

