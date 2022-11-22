#include<iostream>
#include <stdio.h>
using namespace std;

static void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        cout<<n<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    fun(n);
}


