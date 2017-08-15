#include<iostream.h>
#include<conio.h>

class B
{

  void b2()
  {
    cout<<"\nb2()";
  }

  public :

  void b1()
  {
    cout<<"\nb1()";
  }

};

class D : public B
{
   int a;

   public :

   D()
   {
     a=5;
     cout<<"\nConstructor";
   }

   void d1()
   {
    cout<<"\na="<<a;
    cout<<"\nFunc d1()";
   }

   void d2()
   {

   }

};


void main(){
D z;

z.b1();

D().d1();

getch();
}
