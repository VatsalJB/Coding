#include<iostream.h>
#include<conio.h>

void main(){

char *ptr = new char;

cout<<"\nEnter the characters (0 to terminate) : ";

//cin>>*ptr;
cin>>ptr;

for(int i=0;*(ptr+i)!='0';i++)
cin>>*(ptr+i+1);

cout<<"\nThe characters are : \n";

for(int i=0;*(ptr+i)!='0';i++)
cout<<(ptr+i)<<endl;

getch();
}
