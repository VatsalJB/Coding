#include<iostream.h>
#include<conio.h>

void main(){
int a=5;

cout<<"\na="<<a;
cout<<"\n&a="<<&a;

int *b=&a;
//float *b=&a;

cout<<"\nb="<<b;

cout<<"\nb value = "<<*b;

cout<<"\nvalue of a using address = "<<*(&a);

cout<<"\nmomory addres of b : "<<&b;

cout<<"\nvalue of a using address of b : "<<*(*(&b));

getch();
}