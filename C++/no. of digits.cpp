#include<iostream.h>
#include<conio.h>
void main(){
int a,b,e=0;

cout<<"Enter a no.";
cin>>a;

for(b=1;b>=1;b=b*10)  //125
{
if(a/b<=9)
b=0;
++e;
}

cout<<"The no. of digits is "<<e<<endl;


getch();
}