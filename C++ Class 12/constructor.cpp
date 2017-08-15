#include<iostream.h>
#include<conio.h>

class c1
{
  int a,b;

  public :

    void input();

  c1()
  {
    cout<<"\nC1 Constructor";
    input();
  }


  void display();
};

void c1 :: input()
{
 cout<<"\nENter the 2 nos. (class 1) : ";
 cin>>a>>b;
}

void c1 :: display()
{
 cout<<"\nThe numbers are (class 1): "<<a<<" "<<b;
}

class c2
{
  int x,y;

  void input();

  public :

  //c1 obj;

  c2(){
  c1 obj;
  input();
  cout<<"\nC2 constuctor";
  }



  void display();
};



void c2 :: input()
{


 cout<<"\nENter the 2 nos. (class 2): ";
 cin>>x>>y;

 display();
}

void c2 :: display()
{
 cout<<"\nThe numbers are : "<<x<<" "<<y;
}

void main(){
//c1 obj1;
c2 obj2;

//obj2.input();

getch();
}