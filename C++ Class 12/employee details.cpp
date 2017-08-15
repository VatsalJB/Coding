#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class employee
{

 public :

 char name[20];
 int age;
 int sal;


 void input()
 {
   cout<<"\nEnter the name : ";
   gets(name);

   cout<<"\nEnter the age : ";
   cin>>age;

   cout<<"\nEnter the salary : ";
   cin>>sal;
 }

 void display()
 {
  //cout<<"\nName of employee : "<<name;
  cout<<"\nAge : "<<age;
  cout<<"\nSalary : "<<sal;
 }

 void display(char a[])
 {
  cout<<"\nName of company is : "<<a;
 }

 int returnsal()
 {
  return sal;
 }

 void add(int &a,int &b)
 {
  a=a+b;
  cout<<"\nThe sum of salaries of emp 1 and 3 is : "<<a+b;
 }

};

void main(){

employee e[3];

char company[]="xyz";

int i;

for(i=0;i<3;i++)
{
 cout<<"Employee "<<i+1<<endl;

 e[i].input();
 cout<<endl;
 e[i].display(company);
 e[i].display();

 cout<<endl<<endl;
}


e[0].add(e[0].sal,e[2].sal);
cout<<"\nSalaries after adding : "<<endl;
e[0].display();
cout<<endl;
e[2].display();

getch();
}