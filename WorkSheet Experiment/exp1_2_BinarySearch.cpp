#include <iostream> 
using namespace std; int main()
{
    int n, a[100], beg, mid, end, i, k;
    cout << "enter the size of array\n "; 
    cin>>n;
    cout    << "enter the elements\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    beg = 0;
    end = n - 1;
    cout << "enter the element to be searched\n";
    cin >> k;
    while (beg < end)
    {
        mid = (beg + end) / 2;
        if (a[mid] == k)
        {
            cout << "element found at position " << mid;
            break;
        }
        else if (a[mid] > k)
        {
            end = mid - 1;
        }
        else if (a[mid] < k)
        {
            beg = mid + 1;
        }
        else
            cout << "number not found";
    }
    return 0;
}

/*2. Binary Search: 
Step 1: set beg = lower_bound, end = upper_bound, pos = - 1 Step 2: repeat steps 3 
and 4 while beg <=end
Step 3: set mid =
(beg + end)/2 Step 
4: if a[mid] = val set pos = mid 
print pos
go to step 6
else if a[mid] > val set end = mid - 1 else set beg = mid + 1 
[end of if] [end of loop] 
Step 5: if pos = 
-1
print "value is not present in 
the array" [end 
of if] Step 6: exit */