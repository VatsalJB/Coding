#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct st
{
  char name[30];
  int Class;
  st* ptr;
};

void main(){

int i,size;

st* s = new st[size];

size=0;

for(char ch='y';ch=='y'||ch=='Y';size++)
{
 cout<<"\nEnter name of student "<<size+1<<" : ";
 gets((s+size)->name);

 cout<<"\nEnter class : ";
 cin>>(s+size)->Class;

 (s+size)->ptr=(s+size+1);

 cout<<"\nWant to enter more data ? (y/n) : ";
 cin>>ch;

}

i=size-1;
(s+i)->ptr=NULL;

cout<<"\nENter the student number whose details are required : ";
cin>>i;

cout<<"\nDetails of student "<<i<<" are : ";

if(i!=1)
{
 i=i-2;
 cout<<"\nName : "<<(s+i)->ptr->name;
 cout<<"\nClass : "<<(s+i)->ptr->Class;
}
else
{
 cout<<"\nName : "<<s->name;
 cout<<"\nClass : "<<s->Class;
}

delete s;

getch();
}