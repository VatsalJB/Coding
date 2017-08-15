#include<iostream.h>
#include<conio.h>

class A
{
  public :

  void square(int);

};


void A :: square(int s)
{
 cout<<"\nThe square is : "<<s*s;
}

class B
{
  public :

  void cube(int);

};

void B :: cube(int c)
{
  cout<<"\nThe cube is : "<<c*c*c;
}

class C
{
  public :

  void fact(int);
};

void C :: fact(int n)
{
  int f=1;

  for(;n>0;f=f*n,n--);

  cout<<"\nThe factorial is : "<<f;
}


class XYZ : public A,public B,public C
{
  int n;

  public :

  void input();
  int ret();

};


void XYZ :: input()
{
  cout<<"\nEnter the number : ";
  cin>>n;

}

int XYZ :: ret()
{
  return n;
}


void main(){
XYZ x;

x.input();

x.square(x.ret());
x.cube(x.ret());
x.fact(x.ret());

getch();
}


