#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class B
{
  char name[30];

  public :

  void input()
  {
    cout<<"Enter your name (claas B): ";
    gets(name);
  }

  void display()
  {
    cout<<"\nYour name is (Class B): "<<name;
  }

};



class A
{
  char name[30];

  public :


  A(A& obj)
  {
    strcpy(name,obj.name);
  }

  void input()
  {
    cout<<"Enter your name : ";
    gets(name);
  }

  void display()
  {
    cout<<"\nYour name is : "<<name;
  }

};


void main()
{
  A a,b;
  //B c;

  a.input();
  a.display();

  b=a;
  //c=a;

  b.display();

getch();
}
