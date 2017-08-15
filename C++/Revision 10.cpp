#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

void main()
{
  fstream file;
  file.open("Vowel.txt",ios::out);

  char word[50];

  for(char ch='y';ch=='y';)
  {
    cout<<"\nEnter the sentence : ";
    gets(word);

    file<<word<<"\n";

    cout<<"\nEnter more ? (y/n) ";
    cin>>ch;
  }


  file.close();

  file.open("Vowel.txt",ios::in);

  int count=0;
  int len;

  while(!file.eof())
  {
    file>>word;
    len=strlen(word);

    if(len==3)
    count++;
  }

  file.close();

  cout<<"\nNO. of 3 letter words are : "<<count;

  getch();
}  

