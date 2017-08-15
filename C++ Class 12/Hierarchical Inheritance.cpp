#include<iostream.h>
#include<conio.h>

class A
{
  public :

  void display(int i)
  {
    cout<<"\nThe square is : "<<i*i;
  }

};

class B : public A
{
  public :

  int b;

  void input()
  {
    cout<<"\nEnter the number : ";
    cin>>b;
  }

};

class C : public A
{
  public :

  int c;

  void input()
  {
    cout<<"\nENter the second number : ";
    cin>>c;
  }

};

class D : public A
{
  public :

  int d;

  void input()
  {
    cout<<"\nEnter the third number : ";
    cin>>d;
  }

};

void main(){
B x;
C y;
D z;

x.input();
x.display(x.b);

y.input();
y.display(y.c);

z.input();
z.display(z.d);

getch();
}
