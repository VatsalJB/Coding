#include<fstream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
  fstream file,file1;

  file.open("Odd.txt",ios::out);
  file1.open("Even.txt",ios::out);

  char A[10];
  int i=1;

  for(char ch='y';ch=='y';i++)
  {
    cout<<"\nEnter the name : ";
    gets(A);

    if(i%2==1)
    file<<A;
    else
    file1<<A;

    cout<<"\nENter more ? : ";
    cin>>ch;
  }

  file.close();
  file1.close();

  file.open("Odd.txt",ios::in);
  file1.open("Even.txt",ios::in);

  cout<<"\nNames at odd places are : \n\n";

  while(!file.eof())
  {
    file>>A;
    cout<<A<<endl;
  }

  cout<<"\nNames at even places are : \n\n";

  while(!file1.eof())
  {
   file1>>A;
   cout<<A<<endl;
  }

  file.close();
  file1.close();

  getch();
}   
