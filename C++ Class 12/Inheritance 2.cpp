#include<iostream.h>
#include<conio.h>

class B
{
  public :

  void display(int);

};

void B :: display(int x)
{
  cout<<"\nThe factorial is : "<<x;
}



class A : protected B
{
  int f,n;

  public :

  void input();
  int fact();

};

void A :: input()
{
  cout<<"\nEnter the number : ";
  cin>>n;

}

int A :: fact()
{
  f=1;

  for(;n>0;f=f*n,n--);

  display(f);

  return f;
}



void main(){
A z;
//B y;

//y.display(10);
z.input();
//z.display(z.fact());
z.fact();

getch();
}
