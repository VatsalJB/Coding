  /*

  create a function occur () which accept number , digit as parameter and find the occurence
  of digit in number and return.
  */
#include<iostream.h>
#include<conio.h>

void main(){
int a,b;

int occur(int,int);

cout<<"Enter the no : ";
cin>>a;

cout<<"\nEnter the digit : ";
cin>>b;

cout<<"\nThe digit occurs "<<occur(a,b)<<" times.";

getch();
}


int occur(int a,int b){
int i=0,j;

for(;a>0;a=a/10)
{
 j=a%10;
 if(j==b)
 i++;
}
return(i);

}
