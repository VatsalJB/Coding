#include<iostream.h>
#include<conio.h>
void main(){
int a[5][5],i,j,k=0;

cout<<"Enter the matrix : ";

for(i=0;i<5;i++)
{
  for(j=0;j<5;j++)
  cin>>a[i][j];
}

cout<<"\nThe matrix is : \n";

for(i=0;i<5;i++)
{
  for(j=0;j<5;j++)
  cout<<a[i][j]<<"  ";

cout<<endl;
}

for(i=0;i<5;i++)
{
  for(j=0;j<5;j++)
  {
   if(a[j][i]>k)
   k=a[j][i];
  }

cout<<"\nGreatest no. of column "<<i+1<<" = "<<k;
k=0;
}

getch();
} 
