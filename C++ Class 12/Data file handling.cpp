#include<fstream.h>
#include<conio.h>

void main(){
ofstream file("abc.txt");

if(file)
cout<<"\nFile created";
else
cout<<"\nNot created";

file<<"Vatsal";

file.close();

ifstream fil1("abc.txt");

char A[10];

fil1>>A;

cout<<A;

fil1.close();


/*
int roll;

fout<<"ROLL NO.\n";

for(int i=0;i<3;i++)
{
 cout<<"\nEnter roll no. : ";
 fin>>roll;

 fout<<endl;
}
*/

getch();
}
