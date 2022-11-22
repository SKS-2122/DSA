#include<iostream>
#include<stdlib.h>
using namespace std;

struct array{
    int size;
    int arr[100];
    int length;
};

void append(struct array *a,int x)
{
    if(a->length<a->size)
    a->arr[a->length++]=x;

    
}
void display(struct array a)
{
    cout<<"Array after appending new element"<<endl;
    for(int i=0;i<a.length;i++)
    {
        cout<<a.arr[i];
    }
}

int main()
{
     struct array a;
    
    
     int n;
     cout<<"Enter the number of elements"<<endl;
     cin>>n;
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a.arr[i];
    }
    a.length=n;

    append(&a,10);
    display(a);

}