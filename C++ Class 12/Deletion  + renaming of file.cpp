#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

struct st
{
  char name[20];
  int ID;
  float marks;
};


void main(){

fstream file,file1;

file.open("Student.txt",ios::out|ios::binary);

st obj;

for(char ch='y';ch=='y';)
{
  cout<<"\nName : ";
  gets(obj.name);

  cout<<"\nID : ";
  cin>>obj.ID;

  cout<<"\nMarks : ";
  cin>>obj.marks;

  file.write((char *)& obj,sizeof(obj));

  cout<<"\nEnter more ? : ";
  cin>>ch;
}


file.close();

file.open("Student.txt",ios::in|ios::binary);

cout<<"\nOriginal content : \n\n";

while(file.read((char *)& obj,sizeof(obj)))
{
  cout<<"\nName : "<<obj.name;
  cout<<"\nID : "<<obj.ID;
  cout<<"\nMarks : "<<obj.marks;

  cout<<endl;
}

///file.seekg(0,ios::beg);
file.close();
file.open("Student.txt",ios::in|ios::binary);

int ID;

cout<<"\nEnter the ID to be deleted : ";
cin>>ID;

file1.open("Stu.txt",ios::out|ios::binary);

while(file.read((char *)& obj,sizeof(obj)))
{
  if(ID==obj.ID)
  continue;

  file1.write((char *)& obj,sizeof(obj));
}

file.close();
file1.close();

remove("Student.txt");
rename("Stu.txt","Student.txt");

cout<<"\nThe edited file is : \n\n";

file1.open("Student.txt",ios::in|ios::binary);

while(file1.read((char *)& obj,sizeof(obj)))
{
  cout<<"\nName : "<<obj.name;
  cout<<"\nID : "<<obj.ID;
  cout<<"\nMarks : "<<obj.marks;

  cout<<endl;
}

file1.close();

file1.open("Student.txt",ios::in|ios::binary);

cout<<"\nEnter the ID to be modified : ";
cin>>ID;

char name[20];

cout<<"\nENter new name : ";
gets(name);

while(file1.read((char *)& obj,sizeof(obj)))
  if(obj.ID==ID)
  {
   file1.close();

   file1.open("Student.txt",ios::out|ios::binary);

   strcpy(obj.name,name);

   file1.close();

   break;
  }


getch();
}


