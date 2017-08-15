#include<iostream.h>
#include<conio.h>

struct st1
{
  char a;
  st1* next;
}*s1;


st1* fun(char ch)
{
    s1 = new st1;
    s1->a=ch;
    s1->next=NULL;
    return s1;
}


void main(){
st1 *start,*end,*head,*tail,*ptr;


cout<<"Enter the 1st string : ";

int i=0;
char ch;

do
{
  cin.get(ch);

  if(i==0)
  start=end=fun(ch);
  else
  {
    end->next=fun(ch);
    end = end->next;
  }

  i++;

}while(ch!='\n');


cout<<"\nEnter 2nd string : ";

i=0;

do
{
  cin.get(ch);

  if(i==0)
  head=tail=fun(ch);
  else
  {
    tail->next=fun(ch);
    tail = tail->next;
  }

  i++;

}while(ch!='\n');


cout<<"\nThe 1st string is : ";

for(ptr=start;ptr;ptr=ptr->next)
cout<<ptr->a;

cout<<"\nThe 2nd string is : ";

for(ptr=head;ptr;ptr=ptr->next)
cout<<ptr->a;

cout<<"\nThe merged strings are : ";

for(ptr=start;(ptr->next)->next;ptr=ptr->next);

ptr->next=head;

for(ptr=start;ptr;ptr=ptr->next)
cout<<ptr->a;


getch();
}