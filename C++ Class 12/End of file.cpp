#include<fstream.h>
#include<conio.h>
#include<stdio.h>

void main(){

fstream file;

file.open("Count.txt",ios::out);

cout<<"Enter the names : \n\n";

char A[10];

for(char ch='y';ch=='y'||ch=='Y';)
{
 cout<<"\nEnter name : ";
 gets(A);

 file<<A<<"\n";

 cout<<"\nEnter more ? : ";
 cin>>ch;
}

file.close();

file.open("Count.txt",ios::in);

cout<<"\nThe names are : \n\n";

int i=-1;


while(!file.eof())
{
  file>>A;

  cout<<A<<endl;

  i++;
}

cout<<"\nNumber of names : "<<i;

file.close();

getch();
}


