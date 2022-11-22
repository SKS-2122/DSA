#include <iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
int main(){
    struct rectangle r={10,5};
    struct rectangle *p=&r;
    r.length=20;
    cout<<r.length<<endl;
    (*p).length =30;
    cout<<(*p).length<<endl;
    p->length =50;
    cout<<p->length<<endl;

}