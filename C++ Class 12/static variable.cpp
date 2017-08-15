#include<iostream.h>
#include<conio.h>

void fun(){
static int a=10;
a++;

cout<<a;
}

void main(){
fun();
fun();

getch();
}