#include<iostream.h>
#include<conio.h>
void main(){
int a,b=1,c,sum=0,d=1;
cout<<"Enter a no. ";
cin>>a;

c=a;
for(;c>=1;b=b*10)
{
if(c/b<=9)
c=0;
}

b=b/10;

for(;b>=1;b=b/10)
{
c=(a/b)*d;
a=a%b;
sum=sum+c;
d=d*10;
}

cout<<"\nThe reversed value is "<<sum;

getch();
}