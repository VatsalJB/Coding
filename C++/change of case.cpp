#include<iostream.h>
#include<conio.h>
void main(){
char a[10],b,j=0;

cout<<"Enter the string ";

for(int i=0;i<10;i++)
{
cin>>a[i];
cout<<"\nEnter more ? (y/n)\n";
cin>>b;

if(b=='n')
i=10;
else
j++;
}

for(int i=0;i<=j;i++)
{
if(a[i]>=97)
a[i]=a[i]-32;
else
a[i]=a[i]+32;
}

cout<<"\nThe modified string is ";

for(int i=0;i<=j;i++)
cout<<a[i];

getch();
}