
//da hinh ham ao lien ket dong
#include "sach.h"

int main()
{
    book *a[20];
    int n=0;
    cout<<"Amount of books: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Categories of book: ";
        cout<<"\n1.Text book";
        cout<<"\n2.Magazine";
        cout<<"\n3.Theory";
        int k=0;
        cin>>k;
        switch (k)
        {
        case 1:
            a[i]= new textbook;
            a[i]->input();
            break;
        case 2:
            a[i]= new Magazine;
            a[i]->input();
            break;
        case 3:
            a[i]= new Theory;
            a[i]->input();
        }
    }
    cout<<"List: \n";
    for(int i=0;i<n;i++)
    {
        a[i]->output();
    }
    return 0;
}