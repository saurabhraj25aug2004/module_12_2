//Write a program to print the elements of both the diagonals in a square matrix.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n: ";
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
            if(i==j || i+j ==n-1)
            {
                cout<<a[i][j];
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}


/*****************OUTPUT************************
 Enter the value of n: 3
Enter the element of array: 1 2 3
4 5 6
7 8 9


1 3
 5
7 9

Press any key to continue . . .

*/