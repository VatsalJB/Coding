#include<fstream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
  fstream file;

  file.open("File.txt",ios::out);

  char str[10];

  for(int i=0;i<3;i++)
  {
    cout<<"\nEnter name "<<i+1<<" : ";
    gets(str);

    file<<str<<"\n";
  }

  file.close();

  file.open("File.txt",ios::in);

  cout<<"\nThe details are : \n";

  for(int i=0;!file.eof();i++)
  {
    file>>str;
    cout<<"\nName "<<i+1<<" : "<<str;
  }

  file.close();

  getch();
}    

