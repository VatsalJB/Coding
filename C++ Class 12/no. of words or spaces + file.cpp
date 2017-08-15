#include<fstream.h>
#include<conio.h>
#include<stdio.h>

void main(){
fstream file,file1;

file.open("Original_1.txt",ios::out);

char A[50];
int space=0,words=0;

for(char ch='y';ch=='y';)
{
 cout<<"\nEnter the statement : ";
 gets(A);

 file<<A<<"\n";

 cout<<"\nENter more ? : ";
 cin>>ch;
}

file.close();

file.open("Original_1.txt",ios::in);
file1.open("Edited.txt",ios::out);

cout<<"\nThe original file is : \n\n";

while(!file.eof())
{
  file.getline(A,50);

  cout<<A<<endl;

  for(int i=0;A[i]!='\0';i++)
    if(A[i]==' ')
    {                                                               //a bc d
     space++;                                                       //e fgh i

     for(int j=i;A[j+1]!='\0';j++)
     A[j]=A[j+1];
    }

  file1<<A<<"\n";

   words=space+1;
}


cout<<"\nNo. of spaces : "<<space;
cout<<"\nNo. of words : "<<words<<endl;

file.close();
file1.close();

file1.open("Edited.txt",ios::in);

cout<<"\nThe edited file is : \n\n";

while(!file1.eof())
{
  file1>>A;

  cout<<A<<endl;
}

file1.close();

getch();
}

