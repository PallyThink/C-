#include <iostream>
using namespace std;
struct Node {
	//char Name[30];
	int ID;
	//float point;
	Node* pNext;
};
struct ListNode {
	Node* pHead;
	Node* pTail;
};
void initlist(ListNode& l)
{
	l.pHead = NULL;
	l.pTail = NULL;
}
Node* CreateNode()
{
	Node* p = new Node;
	//p->Name[0]='\0';
	p->ID = 0;
	//p->point = 0;
	p->pNext = NULL;
	/*cout << "Name : ";*/
	/*cin.ignore();
	cin.getline(p->Name, 31);*/
	cout << "ID : ";
	cin >> p->ID;
	/*cout << "Point : ";
	cin >> p->point;*/
	return p;
}
void addHead(ListNode& l, Node* p) {
	if (l.pHead == NULL) {//empty
		l.pHead = p;
	}
	else {
		p->pNext = l.pHead;
		l.pHead = p;
	}
}
void addTail(ListNode& l, Node* p) {
	Node* temp = l.pHead;
	while (temp->pNext != NULL) {
		temp = temp->pNext;
	}
	p->pNext = temp->pNext;
	temp->pNext = p;
}
void printNode(Node* p) {
	//cout << p->Name << endl;
	cout << p->ID << endl;
	//cout << p->point << endl;
}
void printList(ListNode l) {
	Node* p = l.pHead;
	while (p != NULL) {
		printNode(p);
		p = p->pNext;
	}
}
void addAfterHead(Node*& pHead, Node* p) {
	if (pHead == NULL) 
	{
		pHead = p;
	}
	else {
		p->pNext = pHead->pNext;
		pHead->pNext = p;
	}
}
void addBeforeTail(ListNode& l, Node* p)
{
	Node* temp = l.pHead;
	while (temp->pNext->pNext != NULL) {
		temp = temp->pNext;
	}
	
	p->pNext = temp->pNext;
	temp->pNext = p;
}
void deleteNodeHead(ListNode& l) {
	l.pHead = l.pHead->pNext;
}
void deleteNodeTail(ListNode& l)
{
	Node* temp = l.pHead;
	while (temp->pNext->pNext!=NULL)
	{
		temp = temp->pNext;
	}
	temp->pNext = temp->pNext->pNext;
}
void removeAtHead(ListNode& l)
{
	if (l.pHead == nullptr)
		return;
	Node* temp =l.pHead;
	l.pHead = l.pHead->pNext;
	delete temp;
}
//void ReverseNode(ListNode& l)
//{
//	Node* k = l.pHead;
//	while (k->pNext!=NULL)
//	{
//		k = k->pNext;
//		Node* temp = l.pHead;
//		while (temp->pNext->pNext!=NULL)
//		{
//			temp = temp->pNext;
//		}
//		Node* f = temp;
//		temp->pNext->pNext = l.pHead;
//		temp->pNext = l.pHead;
//		//k = k->pNext;
//		f->pNext = NULL;
//	}
//}
//void DeleteNodePoint(ListNode& l,float a) 
//{
//	if (l.pHead->ID==a)
//	{
//		l.pHead = l.pHead->pNext;
//	}
//	/*for (Node* k = l.pHead;k != NULL;k = k->pNext)
//	{
//		if (k->ID == a)
//		{
//
//		}
//	}*/
//	Node* temp = l.pHead;
//	while (temp->pNext->pNext != NULL)
//	{
//
//	}
//}
//void delSameNode(ListNode& l)
//{
//	Node* temp = l.pHead;
//	for(;temp->pNext!=NULL;temp=temp->pNext)
//	{
//		int count = 1;
//		Node* k = l.pHead;
//		while (k->pNext->pNext!=NULL)
//		{
//			if (temp == k->pNext)
//			{
//				count++;
//			}
//			if (count == 2)
//			{
//				k = k->pNext->pNext;
//				count = 1;
//			}
//			else
//			{
//				k->pNext;
//			}
//		}
//		temp = temp->pNext;
//	}
//}
int main()
{
	ListNode list;
	initlist(list);
	Node* n1 = CreateNode();
	addHead(list, n1);
	Node* n2 = CreateNode();
	addTail(list, n2);
	Node* n3 = CreateNode();
	addAfterHead(list.pHead,n3);
	Node* n4 = CreateNode();
	addBeforeTail(list, n4);
	//printList(list);
	//cout << endl;
	//deleteNodeHead(list); //8
	//printList(list);  
	//cout << endl;
	//deleteNodeTail(list); //9

	/*float point = 0;
	do
	{
		cout << "Input point : ";
		cin >> point;
	} while (point<0 || point >10);*/
	printList(list);
	cout << endl;
	//delSameNode(list);
	//ReverseNode(list);
	printList(list);
	delete n1, n2, n3, n4;
	//delete[] n1->Name;
	/*if (n1->Name == NULL)
		cout << "het r nhe";*/
	return 0;
}