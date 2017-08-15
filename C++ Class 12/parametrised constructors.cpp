#include<iostream.h>
#include<conio.h>

class c
{
  int a,b;

  public :

  c()
  {
   cout<<"\nENter the 2 nos : ";
   cin>>a>>b;

   cout<<"\nThe numbers are : "<<a<<","<<b;
  } 

  c(int x)
  {
    cout<<"\nEnter the 2 numbers : ";
    cin>>a>>b;

    if(x==1)
    cout<<"\nTheir sum is : "<<a+b;
    else
    cout<<"\nTheir product is : "<<a*b;
  }

  //void display();

};
/*
void c :: display()
{
 cout<<"\nThe numbers are : "<<a<<" "<<b;
}
*/
void main(){
int x;

cout<<"1.Add\n2.Multiply\n";
cout<<"\nEnter the option : ";
cin>>x;

c c1(x);
c obj;

//c1.display();

getch();
}