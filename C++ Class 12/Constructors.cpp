#include<iostream.h>
#include<conio.h>

class multiply
{
  int a;

  public :

  
  multiply()
  {
   cout<<"\nENter the number : ";
   cin>>a;
   a=a*a;
  }

  void display();
};

void multiply :: display()
{
  cout<<"\nIts square is : "<<a;
}

void main(){
multiply m;

m.display();

getch();
}
