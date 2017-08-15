/*

  10 , 20 , 30 , 40 , 50 , 60
  60 , 50 , 40 , 30 , 20 , 10


*/


#include<iostream.h>
#include<conio.h>
void main(){
int a[6],b;

cout<<"Enter the elements ";

for(int i=0;i<6;i++)
{
cin>>a[i];
}

for(int j=5,i=0;j>=3;j--,i++)
{
b=a[j];
a[j]=a[i];  //a[5]<=>a[0]
a[i]=b;
}

for(int i=0;i<6;i++)
{
cout<<a[i];

if(i<5)
cout<<",";
}

getch();
}
