/*

mat1
1  2  3  4
4  5  6  7
1  1  1  1
8  2  2  2

mat2

2  2  2  2
2  2  2  2
2  2  2  2
2  2  2  2

mat3

1  2  3  4
4  5  6  2
1  1  2  2
8  2  2  2


*/
#include<iostream.h>
#include<conio.h>
void main(){
int a[4][4],b[4][4],c[4][4],i,j;

cout<<"Enter the first matrix : ";

for(i=0;i<4;i++)
{
   for(j=0;j<4;j++)
   cin>>a[i][j];
}

cout<<"\nEnter the second matrix : ";

for(i=0;i<4;i++)
{
   for(j=0;j<4;j++)
   cin>>b[i][j];
}

for(i=0;i<4;i++)
{
   for(j=0;j<4;j++)
   {
    if(i+j<=3)
    c[i][j]=a[i][j];
    else
    c[i][j]=b[i][j];
   }
}

cout<<"\nThe modified matrix is : \n";

for(i=0;i<4;i++)
{
   for(j=0;j<4;j++)
   cout<<c[i][j]<<" ";

cout<<endl;
}

getch();
}