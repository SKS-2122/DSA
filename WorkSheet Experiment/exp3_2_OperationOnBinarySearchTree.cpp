#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
Node *
insert(Node *root, int data)
{
    if (root == NULL)
    {
        Node *temp = new Node(data);
        return temp;
    }
    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}
Node *
search(Node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == data)
    {
        return root;
    }
    if (data < root->data)
    {
        return search(root->left, data);
    }
    else
    {
        return search(root->right, data);
    }
}
Node *
findMin(Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL)
    {
        return root;
    }
    return findMin(root->left);
}
Node *
findMax(Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->right == NULL)
    {
        return root;
    }
    return findMax(root->right);
}
Node *
deleteNode(Node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (data < root->data)
    {
        root->left = deleteNode(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = deleteNode(root->right, data);
    }
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        else if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            Node *temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}
int main()
{
    Node *root = NULL;
    for (int i = 0; i < 10; i++)
    {
        root = insert(root, i);
    }
    int choice;
    while (1)
    {
        cout << "Enter the choice" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Search" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Find Min" << endl;
        cout << "5. Find Max" << endl;
        cout << "6. Preorder" << endl;
        cout << "7. Inorder" << endl;
        cout << "8. Postorder" << endl;
        cout << "9. Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int data;
            cout << "Enter the data" << endl;
            cin >> data;
            root = insert(root, data);
            break;
        }
        case 2:
        {
            int data;
            cout << "Enter the data" << endl;
            cin >> data;
            Node *temp = search(root, data);
            if (temp == NULL)
            {
                cout << "Not found" << endl;
            }
            else
            {
                cout << "Found" << endl;
            }
            break;
        }
        case 3:
        {
            int data;
            cout << "Enter the data" << endl;
            cin >> data;
            root = deleteNode(root, data);
            break;
        }
        case 4:
        {
            Node *temp = findMin(root);
            if (temp == NULL)
            {
                cout << "Tree is empty" << endl;
            }
            else
            {
                cout << temp->data << endl;
            }
            break;
        }
        case 5:
        {
            Node *temp = findMax(root);
            if (temp == NULL)
            {
                cout << "Tree is empty" << endl;
            }
            else
            {
                cout << temp->data << endl;
            }
            break;
        }
        case 6:
        {
            preorder(root);
            cout << endl;
            break;
        }
        case 7:
        {
            inorder(root);
            cout << endl;
            break;
        }
        case 8:
        {
            postorder(root);
            cout << endl;
            break;
        }
        case 9:
        {
            exit(0);
        }
        default:
        {
            cout << "Invalid choice" << endl;
        }
        }
    }
}
/*ALGORITHM: -
Search (root, item) 
Step 1 - if (item = root → data) or (root = NULL) return root 
else if (item < root → data)
return Search(root → left, item) 
else
return Search(root → right, item) 
END if Step 2 - END*/