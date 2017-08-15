#include<iostream.h>
#include<conio.h>

class addition
{
 int i,j;

 public :

 void sum();

 void input();
};

void addition :: input()
{
 cout<<"\nEnter the nos : ";
 cin>>i>>j;
}

void addition :: sum()
{
 i=i+j;
 cout<<"\nTheir sum is : "<<i;
}

void main(){
addition a;
a.input();
a.sum();

getch();
} 