#include <iostream>
#include <stdio.h>
using namespace std;


struct Rectangle {
    int length;
    int breadth;
    char x;
};
int main()
{
    struct Rectangle r1 ={10,5};

    cout<<r1.length <<endl;
    cout<<r1.breadth <<endl;

    r1.length=20;
    r1.breadth =30;

     cout<<r1.length <<endl;
    cout<<r1.breadth <<endl;

   cout <<sizeof(r1);
    

}