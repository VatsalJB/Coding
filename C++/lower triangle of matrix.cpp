/*


  4x4;

  1    2     3   4
  5    6     7		8
  9    10    11	12
  13	 14	 15	16




   				   4
	        7		8
      10   11	  12
  13	14   15	  16

*/
#include<iostream.h>
#include<conio.h>
void main(){
int a[4][4],i,j;

cout<<"Enter the matrix : ";

for(i=0;i<4;i++)
{
  for(j=0;j<4;j++)
  cin>>a[i][j];
}

cout<<"\nThe modified matrix is : \n";

for(i=0;i<4;i++)
{
  for(j=0;j<4;j++)
  {
   if((i+j)>=3)
   cout<<a[i][j]<<" ";
   else
   cout<<"  ";
  }
cout<<endl;
}

getch();
}   

