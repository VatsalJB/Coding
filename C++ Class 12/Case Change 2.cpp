#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>

void main(){

fstream file;

file.open("Case Change.txt",ios::out);

char A[10];

cout<<"\nEnter the names : \n";

for(int i=0;i<5;i++)
{
  cout<<"\nName "<<i+1<<" : ";
  gets(A);

  file<<A<<"\n";
}

file.close();

file.open("Case Change.txt",ios::in);


cout<<"\nThe modified names are : \n\n";

while(!file.eof())
{
  file>>A;

  if(isupper(A[0])!=0)
  A[0]=tolower(A[0]);
  else
  A[0]=toupper(A[0]);

  cout<<A<<endl;

}

file.close();

getch();
}
