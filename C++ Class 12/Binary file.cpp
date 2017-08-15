#include<fstream.h>
#include<conio.h>
#include<stdio.h>

struct st
{
  char firstname[20];
  char lastname[20];
  int no;
  float sal;
  char comp[10];
};

void main(){
fstream file;

file.open("Info.txt",ios::out|ios::binary);

 st obj;

for(char ch='y';ch=='y';)
{

  cout<<"\nFirst Name : ";
  gets(obj.firstname);

  cout<<"\nLast Name : ";
  gets(obj.lastname);

  cout<<"\nNumber : ";
  cin>>obj.no;

  cout<<"\nSalary : ";
  cin>>obj.sal;

  cout<<"\nCompany : ";
  gets(obj.comp);

  file.write((char *)& obj,sizeof(obj));

  cout<<"\nEnter more ? :";
  cin>>ch;

  cout<<endl;
}

file.close();

file.open("Info.txt",ios::in|ios::binary);

cout<<"\nThe info is : \n\n";

while(file.read((char *)& obj,sizeof(obj)))
{

  cout<<"\nFull Name : "<<obj.firstname<<" "<<obj.lastname;
  cout<<"\nNumber : "<<obj.no;
  cout<<"\nSalary : "<<obj.sal;
  cout<<"\nCompany : "<<obj.comp;

  cout<<endl;
}

file.close();

getch();
}