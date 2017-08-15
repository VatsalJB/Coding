#include<iostream.h>
#include<conio.h>
void main(){
int a[4][4],i,j;

cout<<"Enter the matrix\n";

for(i=0;i<4;i++)
  for(j=0;j<4;j++)
  cin>>a[i][j];

cout<<endl;

for(i=0;i<4;i++)
{
   for(j=0;j<4;j++)
   {
    if(i<=j)
    cout<<a[i][j]<<" ";
    else
    cout<<"  ";
   }
cout<<endl;
}

getch();
}