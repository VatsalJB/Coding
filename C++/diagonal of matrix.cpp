/*

5,5

print left diagonal elements only.
*/
#include<iostream.h>
#include<conio.h>
void main(){
int a[5][5];
int i=0,j;

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


cout<<"\nThe diagonal is : "<<endl;

for(i=0;i<5;i++)
{
  for(j=0;j<5;j++)
   if(i==j)
   {
    cout<<a[i][j];
    break;
   }
   else
   cout<<"  ";

cout<<endl;
}

getch();
}   
