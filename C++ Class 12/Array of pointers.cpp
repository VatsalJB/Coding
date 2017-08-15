#include<iostream.h>
#include<conio.h>

void main(){

char a,b,c;

a='a';
b='b';
c='c';

char *ptr[5];

ptr[0]=&c;
ptr[1]=&a;
ptr[2]=&b;

cout<<*(ptr+1)<<endl<<*ptr[1]<<endl<<*ptr[2]<<endl;

cout<<"\n**ptr="<<*(*ptr)<<endl;

cout<<"\n*ptr="<<*ptr<<endl;

cout<<*ptr[0]<<endl<<ptr[1]<<endl<<ptr[2];

getch();
}