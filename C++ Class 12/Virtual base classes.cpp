#include<iostream.h>
#include<conio.h>

class Base
{
  public :

  int a;
};

class D1 : virtual public Base
{
  public :

  int b;
};


class D2 : virtual public Base
{
  public :

  int c;
};

class D3 : public D1, public D2
{
  public :

  int total;
};

void main(){
D3 obj;
D1 obj1;

obj.a=25;
obj.b=50;
obj.c=75;

obj.total = obj.a + obj.b + obj.c;

cout<<obj.a<<"\t"<<obj.b<<"\t"<<obj.c<<"\t"<<obj.total<<endl;
cout<<obj1.b;

getch();
}        

