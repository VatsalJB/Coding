#include<iostream.h>
#include<conio.h>
void main(){
int a[4][4],i=0,j,sum=0;

cout<<"Enter the matrix : ";

for(;i<4;i++)
{
  for(j=0;j<4;j++)
  cin>>a[i][j];
}

cout<<"\nThe matrix is : \n";

for(i=0;i<4;i++)
{
  for(j=0;j<4;j++)
  cout<<a[i][j]<<" ";

cout<<endl;
}

for(i=0;i<4;i++)
{
  for(j=0;j<4;j++)
  sum=sum+a[j][i];

cout<<"\nSum of column "<<i+1<<" = "<<sum;
sum=0;
}

getch();
}

