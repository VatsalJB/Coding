#include<iostream.h>
#include<conio.h>
void main(){
int a,c=1,s=1;
cout<<"Enter the number ";
cin>>a;

if((a==0)||(a==1))
cout<<"The factorial is 1";
else
{
while(c<=a)
{
s=s*c;
++c;
}

cout<<"The factorial is "<<s;
}

getch();
}