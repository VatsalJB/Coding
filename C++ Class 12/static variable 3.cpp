#include<iostream.h>
#include<conio.h>

class X
{
  static int count;

  int a;
  public :

  void display()
  {
   a=5;
   cout<<count;
   count++;
   cout<<"\na="<<a;
  }
};

int X :: count =10;

void main(){
X x,y;

/*
cout<<"Object x : ";
X :: display();
cout<<"\nObject y : ";
X :: display();
*/

x.display();

getch();
}

