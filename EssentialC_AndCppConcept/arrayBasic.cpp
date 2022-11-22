#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
        
    }
    cout<<"Element of arraay :"<<endl;
    for(int x:a)
    {
        cout<<x<<endl;
    }
}
    
