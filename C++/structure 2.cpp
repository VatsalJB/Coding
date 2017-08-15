#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct employee{
int id;
char name[30];
float sal;
char addr[100];
};

void main(){
employee emp[2];
employee s;
int i,j;

for(i=0;i<2;i++)
{
 cout<<"\n\n\nEnter the name of employee "<<i+1<<" : ";
 gets(emp[i].name);

 cout<<"\nEnter the ID : ";
 cin>>emp[i].id;

 cout<<"\nEnter the salary : ";
 cin>>emp[i].sal;

 cout<<"\nEnter the address : ";
 gets(emp[i].addr);
}

clrscr();

j=--i;

for(i=0;j>i;i++,j--)
{
 s=emp[j];
 emp[j]=emp[i];
 emp[i]=s;
}

for(i=0;i<2;i++)
{
 cout<<"\n\nEMPLOYEE "<<i+1;
 cout<<"\nName : "<<emp[i].name;
 cout<<"\nID : "<<emp[i].id;
 cout<<"\nSalary : "<<emp[i].sal;
 cout<<"\nAddress : "<<emp[i].addr;
}

getch();
}