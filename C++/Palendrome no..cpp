#include<iostream.h>
#include<conio.h>
void main(){

int a,b=1,c,sum=0,d=1,e,rev=0,rem=0;
cout<<"Enter a no. ";
cin>>a;
c=a;

for(;a>0;a=a/10) //a=324,32,3
{
rem=a%10;             //rem=4,2,3
rev=rev*10+rem;       //rev=4,42,423
}

if(c==rev)
cout<<"\nIt is a Palendrome no.";
else
cout<<"\nIt is not a Palendrome no.";

getch();
}
