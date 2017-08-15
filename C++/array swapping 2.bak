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

cout<<"Enter the no. of elements less than 20 ";
cin>>n;

cout<<"\nEnter the elements \n";

for(int i=0;i<n;i++)
{
cin>>a[i];
}

/*
if(n%2==1)
{
   for(int i=n/2;i<(n-1);i++)    //n=9
   {                                 //i=5
    a[i]=a[i+1];
   }

}

if(n%2==1)
n=n-1;
*/

if(n%2==1)
{
for(int i=n/2;i<(n-1);i++)      //n=5  i=2
{
c=a[i-n/2];      //c=a[0]
a[i-n/2]=a[i+1];   //a[0]=a[3]
a[i+1]=c;          //a[3]=c
}
}
else
{
for(int i=n/2;i<n;i++)      //n=5  i=2
{
c=a[i-n/2];      //c=a[0]
a[i-n/2]=a[i];   //a[0]=a[3]
a[i]=c;          //a[3]=c
}

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