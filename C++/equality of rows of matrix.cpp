/*
4 x 4

*/
#include<iostream.h>
#include<conio.h>
void matrix(){
int a[4][4],i,j,k=3;

for(i=0;i<4;i++)
   for(j=0;j<4;j++)
   cin>>a[i][j];

for(i=0;i<2;i++,k--)
{
   for(j=0;j<4;j++)
   if(a[i][j]!=a[k][j])
   break;

if(j!=4)
{
cout<<"\nRow "<<i+1<<" and row "<<k+1<<" are not equal.";
}
else
cout<<"\nRow "<<i+1<<" and row "<<k+1<<" are equal.";

}

}

void main(){
cout<<"Enter the matrix : ";
matrix();
getch();
}