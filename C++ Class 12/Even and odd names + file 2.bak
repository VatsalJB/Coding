#include<fstream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
  fstream file,file1,orig;

  orig.open("Original.txt",ios::out);

  char A[10];
  int i=1;

  for(char ch='y';ch=='y';i++)
  {
    cout<<"\nEnter the name : ";
    gets(A);

    orig<<A<<"\n";

    cout<<"\nENter more ? : ";
    cin>>ch;
  }

  orig.close();

  orig.open("Original.txt",ios::in);

  file.open("Odd.txt",ios::out);
  file1.open("Even.txt",ios::out);

  i=1;

  while(!orig.eof())
  {
    orig>>A;

    if(i%2==1)
    file<<A<<"\n";
    else
    file1<<A<<"\n";

    i++;
  }

  orig.close();
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