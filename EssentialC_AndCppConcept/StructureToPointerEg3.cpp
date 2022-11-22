#include<iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct rectaangle{
    int length;
    int breadth;
};
int main(){
    rectaangle r={10,5};
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;

    rectaangle *p=&r;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
}
