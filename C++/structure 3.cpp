#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct employee{
int id;
char name[30];
float sal;
char add[100];
};

void main(){
employee emp[5];
int i,j;

for(i=0;i<5;i++){
cout<<"EMPLOYEE "<<i+1;
cout<<"\nEnter the name : ";
gets(emp[i].name);

cout<<"\nEnter the ID : ";
cin>>emp[i].id;

cout<<"\nEnter the salary : ";
cin>>emp[i].sal;

cout<<"\nEnter the address : ";
gets(emp[i].add);

cout<<"\n\n";
}

clrscr();

for(i=0;i<5;i++){
cout<<"EMPLOYEE "<<i+1;

cout<<"\nName : ";

for(j=0;emp[i].name[j]!=' ';j++);
j++;

for(;emp[i].name[j]!='\0';j++)
cout<<emp[i].name[j];

cout<<"\nID : "<<emp[i].id;

cout<<"\nSalary : "<<emp[i].sal;

cout<<"\nAddress : "<<emp[i].add;

cout<<"\n\n";
}

getch();
}

