#include<iostream.h>
#include<conio.h>
void main(){
int n,a,i,e;
float sum=0,d=1,b=2,f=1;

cout<<"Enter the no. ";
cin>>a;

cout<<"\nEnter the no. of terms ";
cin>>n;

i=a;

while(i>0)
{
f=f*i;
i--;
}

while(b<=(n+1))
{
e=b;
   while(e)
   {
   d=d*a;
   e--;
   }

cout<<d<<endl;

sum=sum+d/(f+b);

d=1;
++b;
}

cout<<"\nSum = "<<sum;

getch();
}
