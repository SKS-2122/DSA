#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    struct node *lchild;
    int data;
    struct node *rchild;
}*root =NULL;

void Insert(int key)
{
    struct node *t= root;
    struct node *r=NULL,*p;

    if(root==NULL)
    {
        p= new node;
        p->data=key;
        p->lchild=p->rchild=NULL;
        root=p;
        return;
    }
    while(t!=NULL)
    {
        r=t;
        if(key<t->data)
        t=t->lchild;
        else if(key>t->data)
        t=t->rchild;
        else 
        return;
    }
    p= new node;
    p->data=key;
    p->lchild=p->rchild=NULL;

    if(key<r->data)
    r->lchild=p;
    else
    r->rchild=p;

}

void Inorder(struct node *p)
{
    if (p)
    {
        Inorder(p->lchild);
        printf("%d ", p->data);
        Inorder(p->rchild);
    }
}

struct node * Search(int key)
{
    struct node *t=root;
    while(t!=NULL)
    {
        if(key ==t->data)
        return t;
        else if(key<t->data)
        t=t->lchild;
        else
        t=t->rchild;
    }
    return NULL;
}
int main()
{
    struct node *temp;
    cout<<"INSERT"<<endl;
    for(int i=0;i<5;i++)
    {
        int x;
        cin>>x;
        Insert(x);
    }
    cout<<Inorder(root);
    temp =Search(20);
    if(temp!=NULL)
    {
        cout<<"Element found"<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
}