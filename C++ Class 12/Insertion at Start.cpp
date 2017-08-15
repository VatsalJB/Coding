#include<iostream.h>
#include<conio.h>

struct st
{
  int i;
  st* next;
}*s;


st* create_mem(int j)
{
  s = new st;
  s->i=j;
  s->next=NULL;

  return s;
}

void display(st* head)
{
  for(;head;head=head->next)
  cout<<head->i<<" ";
}


void main(){

st *start,*end,*ptr,*temp;

int i=0,k;

for(char ch='y';ch=='y'||ch=='Y';i++)
{
  cout<<"\nEnter the number : ";
  cin>>k;

  if(i==0)
  start=end=create_mem(k);
  else
  {
    end->next=create_mem(k);
    end=end->next;
  }

  cout<<"\nWant to enter more elements ? (y/n) : ";
  cin>>ch;

}

cout<<"\nThe list is : ";

display(start);

cout<<"\nEnter the element to be inserted at beginning : ";
cin>>k;

ptr=create_mem(k);

/*
temp=start;
start=ptr;
ptr->next=temp;  */

ptr->next=start;
start=ptr;

cout<<"\nThe modified list is : ";

display(start);

getch();
}



