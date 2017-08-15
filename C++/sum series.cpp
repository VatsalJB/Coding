/*
5-(5+4)+(5+4+3)-(     …….)………n terms
*/
#include<iostream.h>
#include<conio.h>
void main(){
signed int n,a=5,b=1,sum=0,d=5;

cout<<"Enter the no. of terms ";
cin>>n;

while(n>0)
{

if(a<=1)
a=-a;

if(b>1)
a=a+d;

if(b%2==0)
a=-a;

sum=sum+a;

d--;
n--;
b++;
}

cout<<"\nSum = "<<sum;

getch();
}
