#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class A
{
  char name[30];
  int age;

  public :

  void input();
  void disp();
};

void A :: input()
{
  cout<<"\nEnter your name : ";
  gets(name);

  cout<<"\nENter your age : ";
  cin>>age;
}

void A :: disp()
{
 cout<<"\nName : "<<name;
 cout<<"\nAge : "<<age;
}

void main(){
A* obj = new A;

obj->input();

cout<<"\nDetails are : \n";

obj->disp();

delete obj;

getch();
}