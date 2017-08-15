#include<fstream.h>
#include<conio.h>
#include<stdio.h>

void main(){

fstream file("File_2.txt",ios::out|ios::in);

char A[10];

//file<<"NAME\n\n";

for(int i=0;i<5;i++)
{
  cout<<"\nENter the name : ";
  gets(A);

  file<<A<<endl;
}

file.close();

///fstream file("File_2.txt",ios::in);

cout<<"\nThe names are : \n";

for(int i=0;i<5;i++)
{
  file>>A;

  cout<<A<<endl;
}

file.close();

getch();
}  