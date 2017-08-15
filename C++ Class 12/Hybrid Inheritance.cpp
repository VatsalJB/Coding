#include<iostream.h>
#include<conio.h>

class A
{
  public :

  void square(int i)
  {
    cout<<"\nThe square is : "<<i*i;
  }

};

class B : public A         //Simple Inheritance
{
  public :

  int b;

  void input()
  {
    cout<<"\nEnter the number : ";
    cin>>b;
  }

  void cube(int j)
  {
    cout<<"\nThe cube is : "<<j*j*j;
  }

};

class C : public B           //Multi level inheritance
{
  public :

};


class D : public A         //Hierarchical inheritance
{

  public :

  int d;

  void input()
  {
    cout<<"\nEnter the number : ";
    cin>>d;
  }

};

/*
class E : public D, public A    //Multiple inheritance
{
  public :

  int e;

};
*/

void main(){

B w;
C x;
D y;
//E z;

cout<<"Class B\n";

w.input();
w.cube(w.b);
w.square(w.b);

cout<<"\nClass C\n";

x.input();
x.cube(x.b);
x.square(x.b);

cout<<"\nClass D\n";

y.input();
y.square(y.d);

///cout<<"\nClass E\n";

//z.input();
//z.square(z.e);


getch();
}