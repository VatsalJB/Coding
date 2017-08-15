#include<iostream.h>
#include<conio.h>
void main(){
float a,n,c,sum;
cout<<"Enter the limit ";
cin>>n;
c=1;
sum=0;

while(c<=n)
{
a=c/(c+1);

sum=a+sum;
++c;
}

cout<<"The sum is "<<sum;

getch();
}

