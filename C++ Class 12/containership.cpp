#include<iostream.h>
#include<conio.h>

class c
{
 int a;

 public :

 void input()
 {
  cout<<"\nENter the value of a in class c : ";
  cin>>a;
 }

 void display()
 {
  cout<<"\nValue of a in class c : "<<a;
  b1.display();
 }

};


class b
{
 int a;
 c c1;

 void display(){
  c1.input();
  c1.display();
  //cout<<"\nThe value of a in b is : "<<a;
 }

 public :

 void test(){
  display();
  cout<<"\nThe value of a in b is : "<<a;
 }

 void input()
 {
  cout<<"ENter : ";
  cin>>a;


 }
 /*
 void display()
 {
  cout<<"\nValue of a in class b : "<<a;
 }
 */
}b1;



void main(){
//b b1;
//c c2;

b1.input();
cout<<endl;

b1.test();
//c2.display();

getch();
}