#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class employee
{
 public :

 int sal;
 char name[10];

 void input(){
 cout<<"\nEnter the name of employee : ";
 gets(name);

 cout<<"\nEnter the salary : ";
 cin>>sal;

 cout<<"\n\n";
 }

 void increment(){
 cout<<"\nDo you want to increment your salary by 1000 ?\n1.Yes\n2.No\n";

 int i;

 cin>>i;

 if(i==1)
 sal+=1000;
 }

 void display(){
 cout<<"\nThe final info is : \n";
 cout<<"\nName of the employee : "<<name;
 cout<<"\nSalary : "<<sal;
 }

};

void main(){
employee e1,e2;

e1.input();
e1.increment();

e2.input();
e2.increment();

e1.display();
e2.display();

if(e1.sal==e2.sal)
cout<<"\nTheir salaries are equal.\n";
else
cout<<"\nTheir salaries are not equal.\n";

int i,j;

for(i=0;e1.name[i]!='\0';i++);
for(j=0;e2.name[j]!='\0';j++);

if(i==j)
{
 i--;

 for(;i>=0;i--)
   if(e1.name[i]!=e2.name[i])
   break;

 if(i<0)
 cout<<"\nTheir names are equal.";
 else
 cout<<"\nTheir names are not equal";
}
else
cout<<"\nTheir names are not equal.";

getch();
}

