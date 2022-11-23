#include <iostream>
using namespace std;
int main()
{
    int arr[20], size;
    cout << "Enter the size of the array."<<endl;
     cin >>size;
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int
            j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
/*Algorithm: 
Step 1: If it is the first element it is already sorted, return 1.
Step 2: pick the next element.
Step 3: Compare with elements in a sorted sub list.
Step 4: Shift all the elements in the sorted sub list that is greater than value to be sorted. Step 
5: Insert the value. 
Step 6: Repeat until the list is sorted.*/