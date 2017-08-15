/*

  5x20

  vatsal
  badami
  john
  charlee
  andrea

*/
#include<iostream.h>
#include<conio.h>
void main(){
char a[5][20];
int i=0;

cout<<"Enter the 5 names : ";

for(;i<5;i++)
cin>>a[i];

cout<<"\nThe thirs letter is : \n";

for(i=0;i<5;i++)
{
 cout<<a[i][2];
 cout<<endl;
}

getch();
} 