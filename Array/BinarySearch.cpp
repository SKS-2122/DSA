#include <iostream>
using namespace std;

struct array{
    int a[10];
    int length;
};
int binarySearch(struct array *arr,int key)
{
    int l,mid,h;
    l=0;
    h=arr->length-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr->a[mid])
        return (mid+1);
        else if(key<arr->a[mid])
        h=mid-1;
        else
        l=mid+1;
    }
    return -1;
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
    cout<<"Element found at = "<<binarySearch(&arr,5);
}