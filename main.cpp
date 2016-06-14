#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

const int N=3;

double start[N]={0.33,0.33,0.34};
double a[N][N];

int main()
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if( i==j ) a[i][j]=0.34;
            else a[i][j]=0.33;
        }
    }

    return 0;
}
