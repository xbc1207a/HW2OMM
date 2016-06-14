#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

const int N=3;

double start[N]={0.33,0.33,0.34};
double a[N][N];

void MatrixMultiple()
{
    for(int i=0;i<N;i++)
    {
        double temp=0;
        for(int j=0;j<N;j++)
        {
            temp=temp+a[i][j]*start[j];
        }
        start[i]=temp;
    }
}
void Transfer(int times)
{
    for(int i=0;i<times;i++)
    {
        MatrixMultiple();
    }
}
void Print()
{
    for(int i=0;i<N;i++)
    {
        printf("start[%d]=%f ",i,start[i]);
    }
    cout<<endl<<endl;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("a[%d][%d]=%f ",i,j,a[i][j]);
        }
        cout<<endl;
    }
    cout<<endl;
}

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
