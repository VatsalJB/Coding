#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>

void main(){

ofstream file("Case Change.txt");

char A[10];

cout<<"\nEnter the names : \n";

for(int i=0;i<5;i++)
{
  cout<<"\nName "<<i+1<<" : ";
  gets(A);

  file<<A<<"\n";
}

file.close();

ifstream file1("Case Change.txt");


cout<<"\nThe modified names are : \n\n";

for(int i=0;i<5;i++)
{
  file1>>A;

  if(isupper(A[0])!=0)
  A[0]=tolower(A[0]);
  else
  A[0]=toupper(A[0]);

  cout<<A<<endl;

 /* file1.close();

  ofstream file2("Change Case.txt");

  file2<<A;

  file2.close()  */
}

file1.close();

getch();
}




