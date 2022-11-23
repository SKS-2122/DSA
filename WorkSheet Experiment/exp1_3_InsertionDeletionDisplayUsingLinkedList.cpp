#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void insert(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void DisplayList(Node *node)
{
    while (node != NULL)
    {
        cout << " " << node->data;
        node = node->next;
    }
    cout << endl;
}
void deleteNode(Node **head_ref, int n)
{
    Node *temp = *head_ref;
    Node *nextNode = temp->next;
    for (int i = 0; i < n - 1; i++)
    {
        if (nextNode->next != NULL)
        {
            temp = temp->next;
            nextNode = nextNode->next;
        }
        else
            return;
    }
    temp->next = nextNode->next;
}
int main()
{
    Node *start = NULL;
    insert(&start, 1);
    insert(&start, 10);
    insert(&start, 23);
    int a;
    cout << "Enter 1 to insert " << endl
         << "Enter 2 to delete " << endl
         << "Enter 3 to display " << endl;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "The default list is: ";
        DisplayList(start);
        cout << "Enter the value you want to enter ";
        int gh;
        cin >> gh;
        insert(&start, gh);
        cout << "The list after insertion is: ";
        DisplayList(start);
        break;
    case 2:
        cout << "The defualt list is: ";
        DisplayList(start);
        cout << "Enter the position of the node which needs to be delted: ";
        int pos;
        cin >> pos;
        deleteNode(&start, pos);
        cout << "The list after deletion is: ";
        DisplayList(start);
        break;
    case 3:
        cout << "The list is: ";
        DisplayList(start);
        break;
    default:
        cout << "Something went wrong";
    }
    return 0;
}

/*
Step 1: If start=null then print underflow Step 2: set Link[Locp]=Link[Loc]
Step 3: set Link[Loc]=Avail
Step 4: end.

Inserting Node: 
Step 1: If Avail=Null, print overflow Step 2: set new= avail, Avail=link[Avail] Step 3: set 
Info[New]=Item
Step 4: new[link]=start
Step 5: start=new
Step 6: end. 

Deleting a node: 
Traverse: 
Step 1: If start=null then print empty list
Step 2: set prt=start
Step 3: repeat step 4 & 5 while(link[prt]!=null) Step 4: process Info[ptr]
Step 5: prt=Link[ptr]
Step 6: End. 
*/