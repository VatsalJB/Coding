#include<iostream.h>
#include<conio.h>

class A
{
  public :

  A()
  {
    cout<<"\nDefault constructor class A";
  }

  A(int x)
  {
    cout<<"\nx="<<x;
    cout<<"\nConstructor A";
  }

};


class B : public A
{
  public :

  B()
    {
    cout<<"\nConstructor B ";
    //cout<<"\nx="<<x;
  }

};


class C : public A
{
  public :

  C() : A(9)
  {
    cout<<"\nConstructor C";
  }

};


void main(){
//A x;
B y;
C z;

getch();
}    
