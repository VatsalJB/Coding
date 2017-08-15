#include<iostream.h>
#include<conio.h>
void main(){
char a,b;
cout<<"Enter the character ";
cin>>a;

b='a';

switch(a){
case 'a' :
b++;                       //b=b

case 'A' :
b++;                       //b=c

case 'i' :
a=b;                        //a=c

case 'J' :
b=b++;   /// a=J  b=b      //b=d a=c
//b=b
//b++///
break;
default :
a=b++; // a=b  , b=c
//a=b
//b++
}

cout<<a<<b;  //a=b b=c

getch();
}