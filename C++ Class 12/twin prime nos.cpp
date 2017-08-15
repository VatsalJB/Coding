#include<iostream.h>
#include<conio.h>

class prime{
public :

int x1,x2;

void twinprime(){

  int i;

  for(i=2;i<x1;i++)
  if(x1%i==0)
  break;

  if(x1==i)
  {
    for(i=2;i<x2;i++)
    if(x2%i==0)
    break;

    if(x2==i)
      if(x2-x1==2||x1-x2==2)
      cout<<"\nThey are twin primes";
      else
      cout<<"\nThey are not twin primes";
    else
    cout<<"\nThey are not twin primes";
  }
  else
  cout<<"\nThey are not twin primes";
}

};

void main(){

prime p;

cout<<"Enter the 2 nos. : ";
cin>>p.x1>>p.x2;

p.twinprime();

getch();
}

