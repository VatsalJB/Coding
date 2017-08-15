/*

3
6
hello
2
2
how
5
120
are
4
24
you


*/




#include<iostream.h>
#include<conio.h>
void fact();
void main(){
int i=0;

fact();
cout<<"\nHello";

fact();
cout<<"\nhow";

fact();
cout<<"\nare";

fact();
cout<<"\nyou";

getch();
}

 void fact(){
int n,f=1;

cout<<"Enter the no. ";
cin>>n;

for(;n>0;n--)
f=f*n;

cout<<"\nThe factorial is : "<<f;
}

