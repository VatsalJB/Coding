#include<iostream.h>
#include<conio.h>
void main(){
char A[10];
int j=0;

cout<<"Enter the array elements";

for(int i=0;i<10;i++)
{
cin>>A[i];
}

for(int i=0;i<10;i++)
{
/*if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u')
j++;*/
switch(A[i])
{
  case 'a':j++;
  break;
  case 'e':j++;
  break;
  case 'i':j++;
  break;
  case 'o':j++;
  break;
  case 'u':j++;
  break;
}
}

cout<<"\nYou have entered "<<j<<" vowels.";

getch();
}
