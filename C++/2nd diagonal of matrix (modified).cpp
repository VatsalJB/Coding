#include<iostream.h>
#include<conio.h>
void main(){
int a[5][5];
int i=0,j,k=4;

cout<<"Enter the matrix : ";

for(;i<5;i++)
  for(j=0;j<5;j++)
  cin>>a[i][j];

cout<<"\nThe matrix is : "<<endl;

for(i=0;i<5;i++)
{
  for(j=0;j<5;j++)
   cout<<a[i][j]<<"  ";

cout<<endl;
}

cout<<"\nThe modified matrix is : "<<endl;

for(i=0;i<5;i++,k--)
{
  for(j=0;j<5;j++)
  {
   if(j<k)
   a[i][j]=1;

   if(j>k)
   a[i][j]=0;
  }
}

for(i=0;i<5;i++)
{
  for(j=0;j<5;j++)
   cout<<a[i][j]<<"  ";

cout<<endl;
}

getch();
}