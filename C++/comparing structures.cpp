#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct employee{
int id;
char name[30];
int sal;
char addr[100];
};

struct employee1{
int id;
char name[30];
int sal;
char addr[100];
};

void main(){
employee e;
employee1 e1;
int i;

cout<<"\nEMPLOYEE DETAILS";
cout<<"\nEnter the name : ";
gets(e.name);
cout<<"\nEnter ID : ";
cin>>e.id;
cout<<"\nEnter salary : ";
cin>>e.sal;
cout<<"\nEnter address : ";
gets(e.addr);

cout<<"\n\n";

cout<<"\nEMPLOYEE DETAILS";
cout<<"\nEnter the name : ";
gets(e1.name);
cout<<"\nEnter ID : ";
cin>>e1.id;
cout<<"\nEnter salary : ";
cin>>e1.sal;
cout<<"\nEnter address : ";
gets(e1.addr);

cout<<"\n\n";

for(i=0;e.name[i]!='\0';i++)
if(e.name[i]!=e1.name[i])
break;

if(e.name[i]!='\0')
cout<<"\nThey are not same";
else{
 for(i=0;e.addr[i]!='\0';i++)
 if(e.addr[i]!=e1.addr[i])
 break;

 if(e.addr[i]!='\0')
 cout<<"\nThey are not equal";
 else
   if(e.id==e1.id)
   {
     if(e.sal==e1.sal)
     cout<<"\nThey are equal";
     else
     cout<<"\nThey are not equal";
   }
   else
   cout<<"\nThey are not equal";
}

getch();
}
