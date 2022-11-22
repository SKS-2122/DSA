#include<iostream>
#include <stdio.h>
using namespace std;
static void fun(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        fun(n-1);
    }
}
int main()
{
    int n;
    cout<<"Enter a number :";
    cin >> n;
    fun(n);
}