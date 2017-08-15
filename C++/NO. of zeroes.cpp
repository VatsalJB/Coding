#include<iostream.h>
#include<conio.h>
void main(){
int n,b,a=0;

cout<<"Enter the no.";
cin>>n;

for(;n>=1;n=n/10){   //n=4005
b=n%10;  

if(b==0)
++a;

}

cout<<"\nZero is entered "<<a<<" times.";

getch();
}
