#include<iostream.h>
#include<conio.h>
void main(){
int n,b=1;
float sum=0,f=1,a=3,d=1;

cout<<"Enter the no. of terms ";
cin>>n;

while(b<=n)
{
   while(a>0)
   {
   f=f*a;
   --a;
   }

cout<<d<<"/"<<(d+2)<<"!";

if(b<n)
cout<<"+";

sum=sum+d/f;
//cout<<d/f<<endl;

d=d+2;
a=d+2;
++b;
f=1;
}

cout<<"="<<sum;

getch();
}