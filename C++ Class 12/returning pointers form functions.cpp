#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>


char* fun(char *A)
{
  char **B;

  B=&A;

  cout<<"The string is : "<<A;

  cout<<"\nThe base address is : "<<&(*A)<<endl;

  //printf("%u",A);
  cout<<"\nB="<<B;

  cout<<"\nUpper case string : ";

  //cout<<"\strupr : "<<strupr(A)<<endl;

  for(int i=0;*(A+i)!='\0';i++)
  {
   *(A+i)=toupper(*(A+i));
  }

  return A;
}



void fun1(char A[])
{
  for(int i=0;A[i]!='\0';i++)
  {
    toupper(A[i]);
    cout<<A[i];
  }

}



void main(){
char str[20];
char *s;

cout<<"\nEnter the string : ";
gets(str);

s=&str[0];

//cout<<"\ntoupper : ";
//fun1(str);

//char ch=toupper('a');

//cout<<"\ntupr : "<<ch;

cout<<"\nAddress of str[0] : "<<s;

cout<<"\nThe modified string is : "<<fun(&str[0]);

getch();
}