/*
8+(8+6)+(8+6+4)…….nterms.
or
7+(7+5)+(7+5+3)...nterms
*/

#include<iostream.h>
#include<conio.h>
void main(){
int n;
signed int a,d;

cout<<"Enter the digit ";
cin>>a;
d=a;

cout<<"\nEnter the no. of terms ";
cin>>n;

while(n>0)
{

cout<<a;

d=d-2;
a=a+d;

if(n>1)
cout<<",";

n--;
}

getch();
}