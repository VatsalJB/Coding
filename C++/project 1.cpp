/*
  menu

1.copy string
2.find char
3.second last index of char
4.exit

enter the choice::
*/
#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>

void strcopy(){
char a[50],b[50];
int i;

cout<<"\nEnter the first string : ";
//cin.getline(a,40);
gets(a);

cout<<"\nEnter the string to be copied : ";
//cin.getline(b,40);
gets(b);

for(i=0;b[i]!='\0';i++)
a[i]=b[i];

cout<<"\nThe modified string is : "<<a;
}

void find_char(){
char a[50],b;
int i;

cout<<"\nEnter the string : ";
//cin.getline(a,50);
gets(a);

cout<<"\nEnter the character to be searched : ";
cin>>b;

for(i=0;a[i]!='\0';i++)
if(a[i]==b)
{
cout<<"\nThe character exists.";
break;
}

if(a[i]=='\0')
cout<<"\nThe character does not exist.";

}

void index(){
char a[50],b;
int i=0,k=-1;

cout<<"\nEnter the string : ";
//cin.getline(a,50);
gets(a);

cout<<"\nEnter the character : ";
cin>>b;

for(;a[i]!='\0';i++);

for(;i>=0;i--)
{
 if(b==a[i])
 k++;

 if(k==1)
 {
  cout<<"\nThe second last index is : "<<i+1;
  break;
 }
}
}

void main(){

while(1){
cout<<"Menu\n\n1.Copy string\n2.Find char\n3.Second last index of given char\n4.Exit\n\nEnter the choice : ";
int i;
cin>>i;

switch(i){

case 1 : strcopy();
         break;

case 2 : find_char();
         break;

case 3 : index();
         break;

case 4 : cout<<"\nExiting...";
         exit(0);
         break;

default : cout<<"\nEnter  a correct choice.\n";
}

cout<<endl<<endl<<"*******************************";
}

getch();
}
