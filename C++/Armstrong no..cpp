#include<iostream.h>
#include<conio.h>
#include<math.h>
void main(){
int a,b=1,c,sum=0;

cout<<"Enter the no. ";
cin>>a;

for(c;c>=1;b=b*10)
{
if(a/b<=9)
c=0;
}

b=b/10;
cout<<b;
c=a;      //c=371

for(;b>0;b=b/10)
{
c=c/b;  //c=3,7,1
sum=sum+pow(c,3);   //sum=3^3 + 7^3
c=a%b;  //c=71 , 1
}

if(sum==a)
cout<<"\nIt is an Armstrong no.";
else
cout<<"\nIt is not an Armstrong no.";

getch();
}
