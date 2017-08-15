#include<iostream.h>
#include<conio.h>

class xyz
{
 int x,y;

 public :

 xyz()
 {
   cout<<"\nEnter the nos. : ";
   cin>>x>>y;

   cout<<"\nTheir sum is : "<<x+y;
 }

 ~xyz()
 {
   cout<<"\nDestructor - class 2";
    getch();
 }

};



class abc
{
  int x,y;



  public :



  abc()
  {
    cout<<"\nEnter the 2 nos. : ";
    cin>>x>>y;

    cout<<"\nTheir product is : "<<x*y;


  }

  ~abc()
  {
   cout<<"\nDestructor";
   xyz z;

  }

  void fun()
  {
    cout<<"\nHello";
  }

};



void main(){

abc a;
a.fun();

}
