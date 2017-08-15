#include<iostream.h>
#include<conio.h>
void main(){
int a,c=1;
cout<<"Enter the number ";
cin>>a;

if((a==0)||(a==1))
cout<<"The factorial is 1";
else
{
while(a>1)
{
c=a*c;

--a;}
cout<<"The factorial is "<<c;
}

getch();
}