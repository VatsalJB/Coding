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

int i=0;

st* s = new st;

/* cout<<"\nEnter name of student "<<i+1<<" : ";
 gets(s->name);

 cout<<"\nEnter class : ";
 cin>>s->Class;

 s->ptr = NULL;*/

 st * head, *tail;
// head=s;


for(char ch='y';ch=='y'||ch=='Y';i++)
{
 st* s = new st;

 cout<<"\nEnter name of student "<<i+1<<" : ";
 gets(s->name);

 cout<<"\nEnter class : ";
 cin>>s->Class;

  s->ptr = NULL;

  if(i==0)
  {
  head=s;
  tail=s;
  }
  else
  {
   tail->ptr=s;
   tail=s;
   }

 //(s+size)->ptr=(s+size+1);

 cout<<"\nWant to enter more data ? (y/n) : ";
 cin>>ch;

}
/*
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
*/

do
{
  cout<<"\nName : "<<head->name;
  cout<<"\nClass : "<<head->Class;
  cout<<endl;

  head=head->ptr;
}while(head->ptr!=NULL);

cout<<"\nName : "<<head->name;
  cout<<"\nClass : "<<head->Class;

delete s;

getch();
}