#include<iostream>
using namespace std;

struct array{
    int a[100];
    int size ;
    int length;
};
int insert(struct array *arr,int index)
{
    int n=0;
    if(index >=0 && index<arr->length)
    {
        n=arr->a[index];
        for(int i=0;i<arr->length-1;i++)
        {
            arr->a[i]==arr->a[i+1];
        }
        arr->length--;
        return n;
    }
    return 0;
}

int main()
{
    struct array arr;
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr.a[i];
    }
    arr.length=n;
    cout<<"Deleted element = "<<insert(&arr ,2);

}