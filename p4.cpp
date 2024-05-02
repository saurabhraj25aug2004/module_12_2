#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> generateMatrix(int n) 
    {
        vector<vector<int>>matrix(n,vector<int> (n));
        int minr =0,minc =0;
        int maxr= n-1,maxc =n-1;
        int tne =n*n;
        int count =0;
        int a=1;
        while(count<tne)
        {
            //right
            for(int j=minc;j<=maxc && count<tne;j++)
            {
                matrix[minr][j] =a++;
                count++;
            }
            minr++;
            //down
            for(int i =minr;i<=maxr && count<tne;i++)
            {
                matrix[i][maxc] =a++;
                count++;
            }
            maxc--;
            //left
            for(int j=maxc;j>=minc && count<tne;j--)
            {
                matrix[maxr][j] =a++;
                count++;
            }
            maxr--;
            //up
            for(int i=maxr;i>=minr && count<tne;i--)
            {
                matrix[i][minc] =a++;
                count++;
            }
            minc++;
            
        }    
            
        return matrix;
    }
}


/*
leetcode -59
Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.
Input 1: n = 3
Output 1: [[1,2,3],[8,9,4],[7,6,5]]
Input 2: n = 1
Output 2: [[1]]

*/


