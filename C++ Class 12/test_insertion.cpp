#include<iostream.h>
#include<conio.h>

struct st
{
  int a;
  st* next;
};


void main(){

st *ptr = NULL,*start=NULL,*end=NULL;

char ch='y';

for(int i=0;ch!='n';i++)
{
ptr = new st;

cout<<"\nEnter the info : ";
cin>>ptr->a;

ptr->next = NULL;

if(i==0)
start=end=ptr;
else
{
  end->next=ptr;
  end=ptr;
}

cout<<"\nWant to enter more ?";
cin>>ch;

}

ptr=new st;
cout<<"\nEnter info of new node : ";
cin>>ptr->a;

ptr->next=start;

start=ptr;

cout<<"\nUpdated list is : ";

for(;start;start=start->next)
cout<<start->a<<"->";

delete ptr;

getch();
}