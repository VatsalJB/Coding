#include<iostream.h>
#include<conio.h>

class c1
{
  public :

  void display(int i)
  {
   cout<<"\nThe square is : "<<i*i;
  }

};

class c2 : private c1
{
  int j;

  public :

  void input()
  {
   cout<<"\nEnter the number : ";
   cin>>j;

   //display(j);
  }

};

void main(){

c2 obj;
c1 obj1;

obj.input();
obj.display(10);

getch();
}  