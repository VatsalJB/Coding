#include<iostream.h>
#include<conio.h>
void main(){
int a[4][4],b[4][4],i,j;

cout<<"Enter the matrix : ";

for(i=0;i<4;i++)
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
  b[j][i]=a[i][j];
}

cout<<"\nThe transpose of matrix is : \n";

for(i=0;i<4;i++)
{
  for(j=0;j<4;j++)
  cout<<b[i][j]<<" ";

cout<<endl;
}

getch();
}  
