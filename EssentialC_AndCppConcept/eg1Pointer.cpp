#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a=10;
    int *p;
    p=&a;

    cout <<a<<endl;
    printf("Using pointer %d",*p);
}