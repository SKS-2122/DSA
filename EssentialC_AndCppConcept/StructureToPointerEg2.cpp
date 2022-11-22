#include<iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};
int main(){
    rectangle *p;
    p= new rectangle;
    p->length=10;
    p->breadth =15;

    cout<<p->length<<endl<<p->breadth<<endl;
}