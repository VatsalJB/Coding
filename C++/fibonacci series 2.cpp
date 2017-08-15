#include<iostream.h>
#include<conio.h>
void main(){
int term,n1,n2=1,d=1,e=0,sum=0;
cout<<"Enter the no.of terms ";
cin>>term;


while(d<=term)
{

n1=n2;
n2=e;
e=n1+n2;
cout<<e;

if(d<term)
cout<<",";

sum=sum+e;


++d;
}

cout<<"\nTheir sum is "<<sum;

getch();
}