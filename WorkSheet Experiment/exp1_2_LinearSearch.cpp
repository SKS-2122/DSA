#include <iostream> 
using namespace std;
int main()
{
    int sea, c, n = 6;
    int arr[] = {13, 35, 54, 23, 45, 24};
    sea = 36;
    for (c = 0; c < n; c++)
    {
        if (arr[c] == sea)
        {
            cout << "Element is presentat" << c << endl;
        }
    }
    if (c == n)
        cout << "Element not found" << endl;
}
/*1. Linear Search : 
Step 1: set pos = -1 Step 2: set i = 1 Step 3: repeat step 4 
while i <= n Step 4: if a[i] == val 
set pos = i pos
[end of if] i + 1 
print go to step 6 set i = 
[end of 
loop]
Step 5: if pos = -1 
print "value is not present in the array " 
[end of if] Step 6: exit*/