#include<iostream.h>
#include<conio.h>

class factorial
{
 public :
  int i;

  void fact(){
  
  int ft=1;

  cout<<"\nEnter the number : ";
  cin>>i;

  for(;i>0;i--)
  ft=ft*i;

  cout<<"\nThe factorial is : "<<ft;
  }
};

void main(){

factorial A;
A.fact();

getch();
}