#include<iostream.h>
#include<conio.h>


class c1
{
  int var1;

  protected :

  int var2;

  public :

 int var3;

  c1()
  {
    var1=1;
    var2=2;
   // var3=3;
  }

  c1(c1 &obj)
  {
    cout<<"\nCopy constructor working.";

    var1=obj.var1;
    var2=obj.var2;
   // obj.var3=var3;
  }

  void display()
  {
    cout<<"\nvar1 : "<<var1;
    cout<<"\nvar2 : "<<var2;
   // cout<<"\nvar3 : "<<var3;
  }

};


void main()
{
  c1 obj1;

  cout<<"\nObj 1 : \n";
  obj1.display();

  //cout<<"\nObj 2 : \n";
  //obj2.display();

  //obj1.var3=10;

  cout<<"\nObj1 after modification : \n";
  obj1.display();

 c1 obj2=obj1;

  cout<<"\nObj2 after copying : \n";
  obj2.display();

  getch();
}