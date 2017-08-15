#include<iostream.h>
#include<conio.h>
void main(){
char a,b;
cout<<"Enter the limits ";
cin>>a>>b;

--b;
++a;

for(;a<=b;a=a+1)
{
cout<<a<<endl;
}

getch();
}