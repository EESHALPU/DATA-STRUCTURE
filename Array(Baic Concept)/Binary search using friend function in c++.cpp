#include<iostream>
#include<conio.h>
using namespace std;
class bSearch
{
    int arr[10];
    int beg,last,mid;
    public:
    void getdata();
    friend void binary_search(bSearch);
};

void bSearch:: getdata()
{
    int i;
    cout<<"Enter the array element";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
}
void binary_search(bSearch t)
{
    t.beg=0,t.last=10;
    t.mid=(t.beg+t.last)/2;
    int item,i;
    cout<<"Enter item which you want to search=";
    cin>>item;
    t.mid=(t.beg+t.last)/2;

    for(i=0;i<10;i++)
    {
        if(item>t.arr[t.mid])
        {
            t.beg=t.mid+1;
            t.mid=(t.beg+t.last)/2;

        }
        else if(item<t.arr[t.mid])
        {
            t.last=t.mid-1;
            t.mid=(t.beg+t.last)/2;

        }
        else
        {
            cout<<" item is found at position="<<t.mid;
            break;
        }

    }
}


int  main()
{

    bSearch obj;
    obj.getdata();
    binary_search(obj);

}
