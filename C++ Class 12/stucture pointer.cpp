#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct st
{
  int roll;
  char name[30];
};

void main(){
int size = 3;

st* s = new st[size];
//st s1[3];
//st* s[3];

for(int i=0;i<3;i++)
{
 //s[i]=&s1[i];

 cout<<"\nEnter the roll no. : ";
 cin>>(s+i)->roll;

 cout<<"\nEnter your name : ";
 gets((s+i)->name);
}

cout<<"\nYour details are : \n";

for(int i=0;i<3;i++)
cout<<"\nName : "<<(s+i)->name<<"\nRoll no : "<<(s+i)->roll<<endl;

delete s;

getch();
}

