#include<iostream.h>
#include<conio.h>

struct st
{
  int a;
  st *next;
};

void main(){

st *s = NULL,*start,*head,*end;

int i=0;

for(char ch='y';ch=='y'||ch=='Y';i++)
{
  s = new st;

  cout<<"\nEnter the number : ";
  cin>>s->a;

  s->next = NULL;

  if(i==0)
  start=end=s;
  else
  {
    end->next = s;
    end = s;
  }

  cout<<"\nWant to enter more nos. ? (y/n) : ";
  cin>>ch;
}

cout<<"\nThe list is : ";

head = start;

for(;head;head=head->next)
cout<<head->a<<" ";

i=start->a;

for(;start;start=start->next)
   if(i>(start->a))
   i=start->a;

cout<<"\nThe smallest number is : "<<i;

delete s;

getch();
}