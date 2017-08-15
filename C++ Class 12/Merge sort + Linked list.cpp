#include<iostream.h>
#include<conio.h>

struct node
{
  int i;
  node* next;
};


node* create(int i)
{
  node *ptr = new node;
  ptr->i=i;
  ptr->next=NULL;

  return ptr;
}


void display(node* start)
{
  for(;start;start=start->next)
  {
   cout<<start->i<<" ";
   //getch();
  }
}


void main(){

node *start,*head,*end,*tail,*ptr,*m_start,*m_end;
int j,k=0;

cout<<"\nEnter the first list (ascending order) : ";

for(char ch='y';ch=='y'||ch=='Y';k++)
{
  cout<<"\nEnter the element : ";
  cin>>j;

  ptr=create(j);

  if(k==0)
  start=end=ptr;
  else
  {
    end->next=ptr;
    end=ptr;
  }

  cout<<"\nEnter more ? (y/n) : ";
  cin>>ch;
}


cout<<"\nEnter the second list (descending order) : ";

k=0;

for(char ch='y';ch=='y'||ch=='Y';k++)
{
  cout<<"\nEnter the element : ";
  cin>>j;

  ptr=create(j);

  if(k==0)
  head=tail=ptr;
  else
  {
    tail->next=ptr;
    tail=ptr;
  }

  cout<<"\nEnter more ? (y/n) : ";
  cin>>ch;
}


cout<<"\nThe first list is : ";
display(start);

cout<<"\nThe second list is : ";
display(head);
display(head);


/*
for(k=0;start&&head;k++)
   if(start->i < head->i)
     if(k==0)
     {
       m_start=m_end=start;
       start=start->next;
     }
     else
     {
       m_end->next=start;
       m_end=start;
       start=start->next;
     }
   else
     if(k==0)
     {
      m_start=m_end=head;
      head=head->next;
     }
     else
     {
       m_end->next=head;
       m_end=head;
       head=head->next;
     }


if(!start)
  for(;head;head=head->next)
  {
    m_end->next=head;
    m_end=head;
  }
else
  for(;start;start=start->next)
  {
    m_end->next=start;
    m_end=start;
  }

*/


for(k=0;start&&tail!=head;k++)
  if(start->i < tail->i)
    if(k==0)
    {
     m_start=m_end=start;
     start=start->next;

     cout<<"\nm_end = "<<m_end->i;
     cout<<"\nstart = "<<start->i;
    }
    else
    {
     m_end->next=start;
     m_end=start;
     start=start->next;

     //cout<<"\nm_end (else) = "<<m_end->i;
     //cout<<"\nstart (else) = "<<start->i;
     //getch();
    }
  else
    if(k==0)
    {
     m_start=m_end=tail;

     for(ptr=head;(ptr->next)->next;ptr=ptr->next);

     tail=ptr;

     cout<<"\nptr="<<ptr->i;

     //getch();

     //delete tail->next;

     tail->next=NULL;


    }
    else
    {
     m_end->next=tail;

     for(ptr=head;ptr->next->next;ptr=ptr->next);                    //6,8

     tail=ptr;

     //cout<<"\nptr2 = "<<ptr->i;
     //getch();

     //delete tail->next;

     tail->next=NULL;

     if(tail==head)
     tail=head=NULL;
    }

//cout<<"\nEnd of for loop";
//getch();

//cout<<"\nList 1 : ";
//display(start);

//cout<<"\nList 2 : ";
//display(head);

if(!start)
for(;tail;)
{
 m_end->next=tail;

 for(ptr=head;ptr->next->next;ptr=ptr->next);
 tail=ptr;

 tail->next=NULL;

 if(head==tail)
 tail=NULL;
}
else
for(;start;)
{
 m_end->next=start;
 m_end=start;
 start=start->next;
}


cout<<"\nThe merged list is : ";

display(m_start);

getch();
}
