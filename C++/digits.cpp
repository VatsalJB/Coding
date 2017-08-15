#include<iostream.h>
#include<conio.h>
void main(){
int a;

cout<<"Enter the no.";
cin>>a;


for(;a>0;a=a/10)
{
cout<<a%10<<endl;
}

getch();
}