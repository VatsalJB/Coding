/*

  array:
  1  , 2  , 3 ,4 ,5 , 6......
  4    5     6  1 2   3

  size<20;
  size=10
*/

#include<iostream.h>
#include<conio.h>
void main(){
int n,c,a[20];

cout<<"Enter the no. of elements(even values) less than 20 ";
cin>>n;

cout<<"\nEnter the elements \n";

for(int i=0;i<n;i++)
{
cin>>a[i];
}

for(int i=n/2;i<n;i++)
{
c=a[i-n/2];  
a[i-n/2]=a[i];
a[i]=c;
}

cout<<endl;

for(int i=0;i<n;i++)
{
cout<<a[i];

if(i<(n-1))
cout<<",";
}

getch();
}
