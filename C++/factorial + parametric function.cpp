#include<iostream.h>
#include<conio.h>
void fact(int n){
int f=1;

for(;n>0;n--)
f=f*n;

cout<<"\nThe factorial is "<<f;
}

void main(){
int n;

cout<<"Enter the number : ";
cin>>n;

fact(n);

getch();
}
