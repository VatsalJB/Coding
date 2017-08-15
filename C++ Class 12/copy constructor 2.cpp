#include<iostream.h>
#include<conio.h>

class Sample
{
  int i,j;

  public :

  Sample(){}

  Sample(int a,int b)
  {
    i=a;
    j=b;

    cout<<"\nParametrised consturctor";
  }

  Sample (Sample &a)
  {
     j=a.j;
    i=a.j;

    cout<<"\nCopy constructor working\n";
  }

  void print()
  {
    cout<<"\ni="<<this->i<<"\nj="<<this->j;
  }

};


void main(){
Sample s(10,20);

Sample t;
t=s;

cout<<"\nObject s\n";
s.print();
cout<<"\nObject t\n";
t.print();

getch();
}

