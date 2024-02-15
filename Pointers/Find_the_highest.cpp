// Problem statement
// Given an array of n integers, find and return the pointer type reference to the highest element of the array. For example if the array is "1 2 3 4 5", you have to return the pointer type variable holding the address of "5".

// Detailed explanation ( Input/output format, Notes, Images )
// Input format
// First line of the input will consist of number of elements n .
// Second line will consist of array ar elements separated by space.
// Output format
// A single line containing the highest number
// Constraints
//  1<= n <=10^6
// -10^6 <= ar[i] <= 10^6
// Note
// You just have to write the definiton of the given function template and return the corresponding pointer type reference. No need of taking any input or printing any output.
// Sample Input 1
//  2
// -56 10
// Sample Output
// 10
// Sample Input 2
// 4
// 1 2 3 4
// Sample Output 2
// 4

#include <bits/stdc++.h>
using namespace std;
int *findmax(int *ar, int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }
    int *fin = &max;
    return fin;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int *ans = findmax(ar, n);
    cout << *ans;
}