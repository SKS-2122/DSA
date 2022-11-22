#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int *p;
    p=a;
    cout<<"From array variable"<<endl;
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
    cout<<"From pointer variable"<<endl;
    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }
}