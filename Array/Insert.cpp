#include <iostream>
using namespace std;

struct array {
    int a[20];
    int size;
    int length;
};

void insert(struct array *arr, int index ,int x)
{
    if(index>=0 && index<=arr->length)
    {
        for(int i=arr->length;i>index;i--)
        {
            arr->a[i]=arr->a[i-1];
        }
        arr->a[index]=x;
        arr->length++;
    }
    cout<<"inserted";
}
void display(struct array arr)
{
    cout<<"Array after updation"<<endl;
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.a[i]<<" ";
    }
}
int main()
{
    struct array arr;
     int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr.a[i];
    }
    arr.length=n;
    insert(&arr ,2,10);
    display(arr);
}