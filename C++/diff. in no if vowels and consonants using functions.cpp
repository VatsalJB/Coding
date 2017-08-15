/*

create  fun  which accept two char as an argument and count the number of vowels
 and consonent and return the difference in their number.

*/
#include<iostream.h>
#include<conio.h>
int alpha(char a,char b){
int i=0,j=0;

  for(;a<=b;a++)
  {
    switch(a){
    case 'a' :
    case 'e' :
    case 'i' :
    case 'o' :
    case 'u' :
    case 'A' :
    case 'E' :
    case 'I' :
    case 'O' :
    case 'U' :i++;
    break;
    default : j++;
   }
  }

return(j-i);
}

void main(){
char a,b;

cout<<"Enter the lower char : ";
cin>>a;

cout<<"\nEnter the upper char : ";
cin>>b;

cout<<"\nDifference in no. of vowels and consonants = "<<alpha(a,b);

getch();
}
