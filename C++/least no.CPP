#include<iostream.h>
#include<conio.h>
void main(){
int a,b,c;
b=1;

cout<<"\n Enter the first no. ";
cin>>a;
c=a;

while(b<=4)
{
cout<<"\nEnter the next no. ";
cin>>a;

if(a<c)
c=a;
++b;
}

cout<<"The least no. is "<<c;

getch();
}




