#include<iostream.h>
#include<conio.h>
void main(){
int a[10],b;

cout<<"Enter the array elements\n";

for(int i=0;i<10;i++)
{
cin>>a[i];
}


for(int j=1;j<10;j=j+2)
{
b=a[j];
a[j]=a[j-1];
a[j-1]=b;
}

for(int l=0;l<10;l++)
{
cout<<a[l];

if(l<9)
cout<<" ";
}

getch();
}