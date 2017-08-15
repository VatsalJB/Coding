#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>


class palindrome
{
  public :

  int pal(char []);
  void display(int);
};

int palindrome :: pal(char str[])
{
  int i,j;

  for(j=0;str[j]!='\0';j++);

  j--;

  for(i=0;i<j;i++,j--)
   if(str[i]!=str[j])
   break;

  if(i==j)
  return 1;
  else
  return 0;
}


void palindrome :: display(int i)
{
  if(i)
  cout<<"\nIt is palindrome.";
  else
  cout<<"\nIt is not palindrome.";
}


class string : public palindrome
{
  char str[50];

  public :

  int input()
  {
   cout<<"\nEnter the string : ";
   gets(str);

   return pal(str);
  }


/*
  void display()
  {
    if(pal(str))
    cout<<"\nThe string is palindrome.";
    else
    cout<<"\nThe string is not palindrome.";

  }
*/

};


void main(){

string s,t;

s.display(s.input());
t=s;
t.display(t.input());


getch();
}


