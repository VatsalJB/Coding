#include<iostream.h>
#include<conio.h>
void main(){
int a=1,n;
float sum=0,f=1;

cout<<"Enter the no.";
cin>>n;

while(a<=n)
{
f=f*a;
cout<<a<<"/"<<f<<"+";
sum=sum+a/f;
++a;
}

cout<<"\b="<<sum;

getch();
}
