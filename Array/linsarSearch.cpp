#include <iostream>
using namespace std;

struct array{
    int a[100];
    int length;
};
int search(struct array *arr,int key)
{
    for(int i=0;i<arr->length;i++)
    {
        if(key==arr->a[i])
        return (i+1);
    }
    return 0;
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
    cout<<"Element at index = " << search(&arr,5);
}