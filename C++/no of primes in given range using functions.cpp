 /*

   create a fun find which accept number integer number as parameter and return the number of prime between
   the given range.

 */
#include<iostream.h>
#include<conio.h>
int prime(int a,int b){
int i=0,j;

 for(;a<=b;a++)
 {
   for(j=2;j<=a/2;j++)
    if(a%j==0)
    break;

  if(j==a/2+1)
  {
   i++;
   cout<<a<<endl;
  } 
 }
return(i);
}

void main(){
int a,b;

cout<<"Enter the lower value of range : ";
cin>>a;

cout<<"Enter the higher value of range : ";
cin>>b;

cout<<"\nThe no. of primes in given range = "<<prime(a,b);

getch();
}