#include<stdio.h>
#include<math.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

const int N=3;

double start[N]={0.33,0.33,0.34};
double a[N][N];

double Probability(int *q,int t)
{
    double p = start[ q[0] ];
    for (int i=1; i<t; i++)
    {
        p=p*a[ q[i-1] ][ q[i] ];
    }
    return p;
}
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
    int option=0;
    // initialize the matrix
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if( i==j ) a[i][j]=0.34;
            else a[i][j]=0.33;
        }
    }
    // end initialize the matrix
    do
    {
        Print();
        cout<<"(1) do 50 training"<<endl;
        cout<<"(2) nothing"<<endl;
        cout<<"(3) bye"<<endl;
        cout<<"input the option >>";

        cin>>option;

        system("cls");

        switch( option )
        {
        case 1:
            Transfer(50);
            break;
        case 2:
            break;
        case 3:
            cout<<"Bye"<<endl;
            break;
        default:
            cout<<"fuck you"<<endl;
            break;
        }
    }while( option!=3 );

    return 0;
}
