#include<iostream.h>
#include<conio.h>
void main(){
int a,b,c=0,d=0;
cout<<"Enter the limits ";
cin>>a>>b;

--b;
++a;
while(a<=b)
{
if(a%2==0)
c=c+1;
else
d=d+1;

a=a+1;
}

cout<<"No. of even nos. = "<<c;
cout<<"No. of odd nos. = "<<d;

getch();
}