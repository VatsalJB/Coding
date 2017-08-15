#include<iostream.h>
#include<conio.h>

class number
{
  int n,A[5];

  public :

  number()
  {
   cout<<"\nEnter the number : ";
   cin>>n;
  }

  int populate();
  void display();

};

int number :: populate()
{
  int i,num;

  num=n;

  for(i=0;num>0;num=num/10,i++)
  {
   A[i]=num%10;
  }

  return i;
}

void number :: display()
{
  int k;

  k=populate();

  k--;

  cout<<"\nThe number in word form is : ";

  for(;k>=0;k--)
  {
    switch(A[k])
    {

     case 0 : cout<<"Zero ";
              break;

     case 1 : cout<<"One ";
              break;

     case 2 : cout<<"Two ";
              break;

     case 3 : cout<<"Three ";
              break;

     case 4 : cout<<"Four ";
              break;

     case 5 : cout<<"Five ";
              break;

     case 6 : cout<<"Six ";
              break;

     case 7 : cout<<"Seven ";
              break;

     case 8 : cout<<"Eight ";
              break;

     case 9 : cout<<"Nine ";
              break;
     }
  }

}

void main(){
number n;

n.display();

getch();
}
