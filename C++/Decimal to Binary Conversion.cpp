/*
Decimal=>Binary
*/

#include<iostream.h>
#include<conio.h>
void main(){
int n,a,b[20],i=0;

cout<<"Enter the decimal no. ";
cin>>n;

while(n!=1)
{
a=n%2;
b[i]=a;

n=n/2;

if(n==1)
b[i+1]=n;

i++;
}

cout<<"\nBinary eqiuvalent is ";

for(;i>=0;i--)
cout<<b[i];

getch();
}
