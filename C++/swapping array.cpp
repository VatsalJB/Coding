/*

array[10]
10, 20 ,30 , 40 , 50 , 60..........
20 , 10 , 40 , 30 , 60 , 50


*/
#include<iostream.h>
#include<conio.h>
void main(){
int a[10],b;

cout<<"Enter the array elements\n";

for(int i=0;i<10;i++)
{
cin>>a[i];
}

for(int i=1;i<10;i=i+2)
{
b=a[i];
a[i]=a[i-1];
a[i-1]=b;
}

for(int i=0;i<10;i++)
{
cout<<a[i];

if(i<9)
cout<<" ";
}
/*
for(int i=1;i<10;i=i+2)
{
a[i-1]=a[i];    //i=1,3,5,7,9
}

for(int i=0;i<10;i=i+2)
{
a[i+1]=b[i];    //i=2,4,6,8
}

for(int i=0;i<10;i++)
{
cout<<a[i];

if(i<9)
cout<<",";
}*/

getch();
}