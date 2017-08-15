/*
  creatte  a fun in which user will input 10 numbers and you have to return
  the min value from the given list.

*/
#include<iostream.h>
#include<conio.h>
int min_val(){
int a,j;

for(int i=0;i<10;i++)
{
 cin>>a;
 if(i==0)
 j=a;

 if(a<j)
 j=a;
}

/*
for(int i=0;i<10;i++)
if(a[i]<j)
j=a[i];
*/
return(j);

}

void main(){
cout<<"\nEnter the 10 nos. : \n";

cout<<"\nThe least value is : "<<min_val();

getch();
}