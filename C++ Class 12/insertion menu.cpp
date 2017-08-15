#include<iostream.h>
#include<conio.h>
#include<process.h>

struct node
{
  int i;
  node* next;
}*st;


node* create_mem(int k)
{
  st = new node;
  st->i=k;
  st->next = NULL;

  return st;
}

node* insert_beg(node* head,int j)
{
  node *ptr;

  ptr = create_mem(j);

  ptr->next=head;
  head=ptr;

  return head;
}


node* insert_last(node* tail,int j)
{
  node *ptr;

  ptr = create_mem(j);

  tail->next = ptr;
  tail = ptr;

  return tail;
}


void insert_betw(node* head,int k,int j)
{
  for(;head->i!=j;head=head->next);

  node *ptr,*temp;
  ptr = create_mem(k);

  temp=head->next;
  head->next=ptr;
  ptr->next=temp;

}


void sort(node* head)
{
  node *temp,*ptr;
  int tmp1;

  //temp->next=ptr->next=tmp1->next=NULL;

  for(int i=0;head;head=head->next,i++)
  {
    ptr=head;

      for(temp=ptr;temp;temp=temp->next)
         if((ptr->i)>(temp->i))                     //1,4,3,2
         {
           tmp1=ptr->i;
           ptr->i=temp->i;
           temp->i=tmp1;
         }

  }

}


void display(node* head)
{
  for(;head;head=head->next)
  cout<<head->i<<" ";

  cout<<endl;
}


void main(){

node *start,*end;

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

  cout<<"\nWant to enter more ? (y/n) : ";
  cin>>ch;

}

i=0;

for(;i!=6;)
{
  cout<<"\n\nEnter your choice : ";
  cout<<"\n\n1.Insert at beginning\n2.Insert at end\n3.Insert in between\n4.Sort\n5.Display\n6.Exit\n";

  cin>>i;

  switch(i){

  case 1 : cout<<"\nEnter the element to be inserted : ";
           cin>>k;
           start=insert_beg(start,k);

           break;

  case 2 : cout<<"\nEnter the element to be inserted : ";
           cin>>k;
           end=insert_last(end,k);

           break;

  case 3 : cout<<"\nEnter the element to be inserted : ";
           cin>>k;

           int j;
           cout<<"\nAfter which element do you want to insert ? : ";
           cin>>j;

           insert_betw(start,k,j);

           break;

  case 4 : sort(start);

           break;

  case 5 : cout<<"\n\nThe list is : ";

           display(start);

           break;

  case 6 : cout<<"\nExiting...";
           getch();
           exit(0);

           break;

  default : cout<<"\nEnter a correct choice.";

 }

}

getch();
}
