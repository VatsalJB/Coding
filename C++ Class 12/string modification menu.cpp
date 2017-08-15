#include<iostream.h>
#include<stdio.h>
#include<process.h>

class mystring
{
 public :

 char string[30];

 void input(){

  cout<<"\nEnter the string : ";
  gets(string);
 }

 void replace(){
  int i;

  for(i=0;string[i]!='\0';i++)
  {
   switch(string[i]){
   case 'a' :
   case 'e' :
   case 'i' :
   case 'o' :
   case 'u' :
   case 'A' :
   case 'E' :
   case 'I' :
   case 'O' :
   case 'U' : break;

   default : string[i]++;
   }
  }
 }

 void display(){

 cout<<"\nThe current string is : "<<string;
 }

 void clear(){
 //cout<<"\nEnter the new string : ";
 //gets(string);
 input();
 }

};

void main(){

mystring mstr;

int i,j=0;

mstr.input();

for(;j!=2;)
{
 cout<<"\nChoose your operation : \n\n1.Replace\n2.Display\n3.Clear\n4.Exit";
 cin>>i;

 if(i==1)
 mstr.replace();
 else
   if(i==2)
   mstr.display();
   else
     if(i==3)
     {
      mstr.clear();
      continue;
     }
     else
       if(i==4)
       exit(0);
       else
         cout<<"\nEnter a proper choice";

  cout<<"\nPerform more operations ?\n\n1.Yes\n2.No\n";
  cin>>j;
}

}
