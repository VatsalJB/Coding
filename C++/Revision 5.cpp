#include<iostream.h>
#include<conio.h>
#include<stdio.h>


class c1
{
  int i1;
  char a1;

  protected :

  int pr1;

  public :

  int pub1;

  c1()
  {
    cout<<"\nConstructor of class c1";
    pr1=10;
    pub1=20;

  }

  c1(int k)
  {
    cout<<"\nParametrised constructor of class c1";
    pub1=pr1=k;
  }

  void fun1()
  {
    cout<<"\nEnter the integer and character for class c1 : ";
    cin>>i1;
    cin>>a1;
  }
};


class c2
{
  int i2;
  char a2;

  protected :

  int pr2;

  public :

  int pub2;

  c2()
  {
    cout<<"\nConstructor of class c2";

    pr2=30;
    pub2=40;
  }

  c2(int k)
  {
    cout<<"\nParametrised constructor of class c2";

    pr2=pub2=k;
  }

  void fun2()
  {
    cout<<"\nEnter the integer and character for class c2 : ";
    cin>>i2;
    cin>>a2;
  }
};


class c3
{
  int i3;
  char a3;

  protected :

  int pr3;

  public :

  int pub3;

  c3()
  {
    cout<<"\nConstructor of class c3";

    pr3=50;
    pub3=60;
  }

  void fun3()
  {
    cout<<"\nEnter the integer and character for class c3 : ";
    cin>>i3;
    cin>>a3;
  }
};


class derived : public c1,private c2,protected c3             //pr1, pub1, pr3, pub3
{
  int d;
  char ch;

  protected :

  int pr;

  public :

  int pub;

  derived()
  {
    cout<<"\nConstructor of class derived ";

    pr=70;
    pub=80;
  }

  derived(int i,int j,int k,int l) : c1(i),c2(j)
  {
    cout<<"\nParametrised constructor of class derived.";

    pr=k;
    pub=l;

  }

  void function()
  {
    cout<<"\nEnter the integer and character for class derived : ";
    cin>>d>>ch;

    fun2();
  }
};


class sub : public derived                               //pr1, pub1, pr3, pub3, pr, pub ,j ,c, var, var1
{
  int j;
  char c;

  protected :

  int var;

  public :

  int var1;

  sub()
  {
    cout<<"\nConstructor of class sub";

    var=90;
    var1=100;
  }

  sub(int i,int j,int k,int l) : derived(i,j,k,l)
  {
    cout<<"\nParametrised constructor of class sub";

    var=i;
    var1=j;
  }


  void method()
  {
    cout<<"\nENter int and char for sub : ";
    cin>>j>>c;
 /*
    cout<<"\nAccessible data mambers : \n";
    cout<<"\npr1 : "<<pr1;
    cout<<"\npub1 : "<<pub1;
    cout<<"\npr3 : "<<pr3;
    cout<<"\npub3 : "<<pub3;
    cout<<"\npr : "<<pr;
    cout<<"\npub : "<<pub;
    cout<<"\nj : "<<j;
    cout<<"\nc : "<<c;
    cout<<"\nvar : "<<var;
    cout<<"\nvar1 : "<<var1;
   */
  }
};


void main()
{

  sub obj1(500,1,2,3);

  //derived obj;

  //obj.function();

 // obj1.method();                                //pub1, var1

 // cout<<"\nSize : "<<sizeof(obj);

 //cout<<"\nobj.pub1 : "<<obj.pub1;
 //cout<<"\nobj.var1 : "<<obj.var1;


  getch();
}