#include <iostream>
#include<stdlib.h>
using namespace std;
struct array{
    int *a;
    int size ;
    int length;
};
void display (struct array arr)
{
    cout<<"Array elements are..."<<endl;
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.a[i];
    }
}

int main()
{
     struct array arr;
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>arr.size;
    arr.a=(int*)malloc(arr.size*sizeof(int));
    arr.length =0;

    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr.a[i];
    }
    arr.length=n;
    display(arr);
}
