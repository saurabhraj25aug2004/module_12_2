#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int a[n][n];
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    //
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<=j)
            {
                swap(a[i][j],a[j][i]);
            }
        }
    }

     for(int j=0;j<n;j++)
    {
        for(int i=0;i<=n/2;i++)
        {
            swap(a[i][j],a[n-i-1][j]);
        }
    }

    cout<<"\n";


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

/************OUTPUT******************
 Write a program to rotate the matrix by 90 degrees anti-clockwise.
Input 1:
1 2 3
4 5 6
7 8 9
Output 1:
3 6 9
2 5 8
1 4 7

*/
