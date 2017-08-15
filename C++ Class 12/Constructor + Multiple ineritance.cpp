#include<iostream.h>
#include<conio.h>

class A
{
  int a;

  public :

  A(int x)
  {
    cout<<"\nEnter the number (Class A) : ";
    cin>>a;
    cout<<"\nx="<<x;
  }

  void display()
  {
    cout<<"a="<<a;
  }

};


class B
{
  int b;

  public :

  B(int y)
  {
    cout<<"\nEnter the number (Class B) : ";
    cin>>b;
    cout<<"\ny="<<y;
  }

  void square()
  {
    cout<<"\nThe square is : "<<b*b;
  }

};


class C : private B, protected A
{
  int c;

  public :

  C() : A(0), B(2)
  {
    cout<<"\nEnter the number (Class C) : ";
    cin>>c;
  }

  void cube()
  {
    cout<<"\nthe cube is : "<<c*c*c;
  }

};


void main(){

/*
A x;

x.display();

B y;

y.square();

C z;

//z.square();
*/
B y(1);

C z;

z.cube();

//cout<<"\n\nSize of class A : "<<sizeof (x);
//cout<<"\n\nSize of class B : "<<sizeof (y);
cout<<"\n\nSize of class C : "<<sizeof (z);

getch();
}



