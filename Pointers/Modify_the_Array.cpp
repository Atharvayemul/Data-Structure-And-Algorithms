// Problem statement
// Given an array ar of n integers, find the minimum and maximum value in the array and store their addresses in separate pointer variables. Then, modify the values at the addresses pointed by these pointers setting the minimum value to 0 and maximum value to 100.

// Detailed explanation ( Input/output format, Notes, Images )
// Input Format
// The first line of input consists of the number of elements of array n.
// The second line contains the elements of the array separated by space.
// Output format
// A single line containing the modified array elements separated by space.
// Constraints
//  1<= n <=1000
// -10^6  ar[i] <=10^6
// Note
// You don't have to write the entire code. Just complete the definition of modify function listed in the editor.
// Sample Input 1
//  2
// -56 10
// Sample Output 1
// 0 100
// Sample Input 2
// 4
// 1 2 3 4
// Sample Output 2
// 0 2 3 100

void modify(int *ar, int n)
{
    int *minPtr = ar;
    int *maxPtr = ar;
    for (int i = 1; i < n; i++)
    {
        if (ar[i] < *minPtr)
            minPtr = &ar[i];
        if (ar[i] > *maxPtr)
            maxPtr = &ar[i];
    }
    *minPtr = 0;
    *maxPtr = 100;
}


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    modify(ar,n);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}