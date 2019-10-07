#include <iostream>

using namespace std;
class node{
public:
    int data;
    node *link;
            };

node *global=NULL;
node *arr;
void insert(int n)
{
    arr=new node();
    if(global==NULL)
    {
            global=arr;
            arr->data=n;
            arr->link=NULL;
    }
    else
        arr->link=global;
        arr->data=n;
        global=arr;
}
void print()
{
    while(arr!=NULL)
    {
        cout<<arr->data<<endl;
        arr=arr->link;

    }

}
int main()
{   int ni;
cin>>ni;
  while(ni!=0)
    {
     int value;
     cin>>value;
    insert(value);
    ni--;
  }

print();
    return 0;

}
