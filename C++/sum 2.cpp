#include<iostream.h>
#include<conio.h>
void main(){
float a,b,n,c,sum;
cout<<"Enter the limit ";
cin>>n;
c=0;
sum=0;
b=1;

while(b<=n)
{
a=(c+1)/(c+3);

sum=a+sum;
c=c+2;
++b;
}

cout<<"The sum is "<<sum;

getch();
}
