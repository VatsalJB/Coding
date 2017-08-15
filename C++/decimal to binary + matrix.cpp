/*

  5 ,4 ,2, 1

  0101
  0010
*/

#include<iostream.h>
#include<conio.h>
void main(){
int a[5][5],b[5],i,j;

cout<<"Enter the 5 nos. ";

for(i=0;i<5;i++)
cin>>b[i];

for(i=0;i<5;i++)
{
   for(j=0;j<5;j++)
   {
    a[i][j]=b[i]%2;
    b[i]=b[i]/2;
   }
}

cout<<"\nThe corresponding matrix is : \n";

for(i=0;i<5;i++)
{
   for(j=4;j>=0;j--)
   {
    cout<<a[i][j]<<" ";
   }
cout<<endl;
}

getch();
}



