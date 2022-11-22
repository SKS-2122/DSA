#include <iostream>
using namespace std;

struct stack{
    int size ;
    int top;
    int *s;
};

void create(struct stack *st)
{
    cout<<"Enter the size"<<endl;
    cin>>st->size;
    st->top=-1;
    st->s= new int[5];
}

void display(struct stack st)
{
    for(int i=st.top;i>=0;i--)
    {
        cout<<st.s[i];
    }
    cout<<endl;
}

void push(struct stack *st , int x)
{
    if(st->top==st->size-1)
    cout<<"Stack Overflow"<<endl;
    else{
        st->top++;
        st->s[st->top]=x;
    }
}
int pop(struct stack *st)
{
    int x=-1;
    if(st->top==-1)
    cout<<"Stack Underflow"<<endl;
    else{
        x=st->s[st->top--];
    }
    return x;

}

int peek(struct stack *st,int index)
{
    int x=-1;
    if(st->top-index+1<0)
    {
        cout<<"Invalid index"<<endl;
    }
    x=st->s[st->top-index+1];
    return x;
}
int isEmpty(struct stack st){
    if(st.top==-1)
    return 1;
    return 0;
}
int isFull(struct stack st)
{
    return st.top==st.size-1;
}
int stackTop(struct stack st)
{
    if(!isEmpty(st))
    {
        return st.s[st.top];
    }
    return -1;
}
int main()
{
    struct stack st;
    create(&st);
    cout<<"Enter  element "<<endl;
    for(int i=0;i<5;i++)
    {
        int x;
        cin>>x;
        push(&st,x);
    }
    cout<<"POP "<<pop(&st)<<endl;;
    display(st);
}