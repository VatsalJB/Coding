#include<iostream.h>
#include<conio.h>

void main(){

int *ptr;

int a=10;

ptr=&a;

cout<<"\nptr : "<<ptr;       //Memory address of variable 'a' is displayed
cout<<"\n*ptr : "<<*ptr;

a=a+5;

cout<<"\n*ptr : "<<*ptr;    //Value stored in the memory address which ptr holds

cout<<"\n&ptr : "<<&ptr;   //Memory address of pointer variable ptr

*ptr=8;        //Assigns the value 8 to the varible address towards which it points (a)

cout<<"\na="<<a;

getch();
}