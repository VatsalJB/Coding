#include<iostream.h>
#include<conio.h>

struct string
{
  char ch;
  string* next;
};

void main(){

string *st;
char c;

string *head,*tail,*ptr;

/*
st->next=NULL;
st->ch='\0';


cout<<"\nEnter character 1 : ";
cin>>st->ch;

st->next = NULL;

head=tail=st;
*/

cout<<"\nEnter the string : ";

int i=1;

do
{


  //char c;

  //cout<<"\nWant to enter more characters ? (y/n) : ";
  //cin>>c;

  //if(c=='n'||c=='N')
  //break;

  //cout<<"\nEnter character "<<i<<" : ";

  st = new string;

  cin.get(st->ch);

  st->next = NULL;

  if(i==1)
  head=tail=st;
  else
  {
   tail->next = st;
   tail=st;
  }

  i++;

}while(st->ch!='\n');



cout<<"\nThe string is : ";

ptr=head;

for(;head;head=head->next)
cout<<head->ch;

//cout<<head->ch;

cout<<"\nEnter the character to be searched : ";
cin>>c;

for(i=1;ptr;ptr=ptr->next,i++)
  if(ptr->ch==c)
  {
    cout<<"\nThe character exists at position "<<i;
    break;
  }

if(!ptr)
cout<<"\nThe character does not exist.";

delete st;

getch();
}
