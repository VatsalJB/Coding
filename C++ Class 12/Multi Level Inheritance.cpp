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

class B : public A
{
  public :

  void cube(int);

};

void B :: cube(int c)
{
  cout<<"\nThe cube is : "<<c*c*c;
}

class C : public B
{
  int n;

  public :

  void input();
  int ret();

};

void C :: input()
{
  cout<<"\nEnter the number : ";
  cin>>n;
}

int C :: ret()
{
 return n;
}


void main(){
C z;

z.input();

z.square(z.ret());
z.cube(z.ret());

getch();
}   