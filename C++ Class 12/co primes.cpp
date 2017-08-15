#include<iostream.h>
#include<conio.h>

class prime
{
  public :
  int x1,x2;

  void coprime(){
  int i=2;


    for(;i<x2;i++)
    if(x2%i==0)
      if(x1%i==0)
      break;

    if(x2%x1==0)
    i=0;

    if(i==x2)
    cout<<"\nThey are co primes";
    else
    cout<<"\nThey are not co primes";
   }

};

void main(){

prime p;

cout<<"Enter the 2 nos. : ";
cin>>p.x1>>p.x2;

p.coprime();

getch();
}