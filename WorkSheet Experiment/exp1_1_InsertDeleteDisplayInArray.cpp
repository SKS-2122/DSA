#include <iostream>
 using namespace std;
int main()
{
    int a[20], size, i, del, C, add, k, loc;
    cout << "Enter Size of Element" << endl;
    cin >> size;
    cout << endl;
    cout << "Enter the elements:" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << endl;
    cout << "Please enter which thing you want to do" << endl
     << "1.Insert a new  element at a given position "<<endl
     <<" 2.Delete an element whose position is given "<<endl
     <<" 3.To find the positio of a given element "<<endl
     <<" 4.To display the elements of the linear array "<<endl
     <<endl; 
    cin >> C;
    cout << endl;
    switch (C)
    {
    case 1:
        cout << "Enter the position at which you want to insert the element:" << endl;
        cin >> add;
        for (i = size - 1; i >= add - 1; i--)
        {
            a[i + 1] = a[i];
        }
        cout << endl;
        size = ++size;
        cout << "Please Enter the extra no.:" << endl;
        cin >> k;
        a[add - 1] = k;
        cout << endl
             << "New Array After adding " << k << " at " << add << " position "<<endl;
            for (i = 0; i < size; i++)
        {
            cout << a[i];
        }
        cout << endl
             << endl;
        break;
    case 2:
        cout << "Please enter the position of element which has to delete:" << endl;
        cin >> del;
        for (i = del - 1; i < size; i++)
        {
            a[i] = a[i + 1];
        }
        size = --size;
        cout << endl
             << "Array after deletion is:" << endl;
        for (i = 0; i < size; i++)
        {
            cout << a[i] << endl;
        }
        cout << endl;
        break;
    case 3:
    {
        cout << "Enter the element to find position" << endl;
        cin >> loc;
        cout << endl;
        int z = 0;
        for (i = 0; i < size; i++)
        {
            if (a[i] == loc)
            {
                z = i + 1;
                cout << "the position is : " << z << endl<< endl;
            }
        }
    }
    break;
    case 4:
        for (i = 0; i < size; i++)
        {
            cout << a[i];
        }
        cout << endl;
        break;
    default:
        cout << "Wrong Input: " << endl << "Choose from given option "<<endl<<endl;
    break; 
    }
    cout << "SKS-2122" << endl<< endl;
    return 0;
}

//Algo

/*1. Insertion: 
1. Start
2. Set J = N(Total number of elements in array) 3. Repeat steps 4 and 5 while J >=K
4. Set a[J+1] = a[J ]
5. Set J = J-1
6. Set N = N+1
7. Stop 

2. Deletion : 
1. Start
2. Set J = K
3. Repeat steps 4 and 5 while J < N 4. Set a[J] = a[J + 1]
5. Set J = J+1
6. Set N = N-1
7. Stop 

3. To find element: 
1. Start.
2. Set J = 0
3. Repeat steps 4 and 5 while J < N 
4. IF a[J] is equal ITEM THEN GOTO STEP 6 5. Set J = J +1
6. PRINT J, ITEM
7. Stop 
*/