#include<iostream.h>
#include<conio.h>
void main(){
char a[4][5];
int i=0,j;

cout<<"Enter the elements of matrix : ";

for(;i<4;i++)
{
   for(j=0;j<5;j++)
   cin>>a[i][j];
}

cout<<"\nThe matrix is : "<<endl;

for(i=0;i<4;i++)
{
   for(j=0;j<5;j++)
   cout<<a[i][j]<<" ";

cout<<endl;
}

getch();
}