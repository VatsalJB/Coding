#include<iostream.h>
#include<conio.h>
void main(){
int a[4][4],b[4][4],i=0,j;

cout<<"Enter the first matrix : ";

for(;i<4;i++)
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
   if((i+j)<=3)
      if(a[i][j]!=b[i][j])
      break;

if(j!=4)
break;
}

if(i==4)
cout<<"\nTheir upper left triangles are equal.";
else
cout<<"\nTheir upper left triangles are not equal.";

getch();
}       