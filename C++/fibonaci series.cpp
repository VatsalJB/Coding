#include<iostream.h>
#include<conio.h>
void main(){
int term,n1=0,n2=1,d=1,e,sum;
cout<<"Enter the no.of terms ";
cin>>term;

cout<<"0,1,";
sum=n1+n2;

while(d<=(term-2))   //3
{

e=n1+n2;          //e=1,2,3
cout<<e;

if(d<(term-2))
cout<<",";

sum=sum+e;
n1=n2;
n2=e;

++d;
}

cout<<"\nTheir sum is "<<sum;

getch();
}
