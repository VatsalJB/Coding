#include<iostream.h>
#include<conio.h>

class outer
{
  int a;

  public :

  class inner
  {
    int b;


    public :

    int c;


    inner()
    {
      b=5;
      c=10;

      cout<<"\nInner constructor";
    }

    void prn()
    {
      cout<<endl<<"Inner::prn()"<<endl;
      cout<<b<<" "<<c<<endl;
    }

  };

  inner ob2;

  inner ob1;

  void second()
  {


    cout<<endl<<"Outer::second()"<<endl;
    cout<<ob2.c<<endl;
    cout<<"a="<<a<<endl;
  }

  outer()
  {
   a=25;
      cout<<"\nOuter constructor";

  }

};


void main(){

outer ab;
//inner bc;
//outer::inner cd;
ab.second();
//bc.prn();
//cd.prn();

////ab.ob2.prn();

getch();
}
