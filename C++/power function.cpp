#include<iostream.h>
#include<conio.h>
power(int a,int b){ //If no func. type is specified, int is assumed by the compiler
int res=1;

for(;b>0;b--)
res=res*a;

return(res);
}

void main(){
int a,b,res;

cout<<"Enter the base : ";
cin>>a;

cout<<"\nEnter the power : ";
cin>>b;

res=power(a,b);

cout<<"\nResult = "<<res;

getch();
}

