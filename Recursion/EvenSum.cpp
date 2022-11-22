#include <iostream>
using namespace std;

 void fun(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    cout<< fun(n-1)+fun(n-2);
}

int main()
{
    int n;
    cout<< "Enter the range : ";
    cin>>n;
    fun(n);
}