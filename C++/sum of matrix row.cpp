/*

  1  2 3  4 5 =>15
  6   7 8 9 10 =>???
*/
#include<iostream.h>
#include<conio.h>
void main(){
int a[5][5],i,j,sum=0;

cout<<"Enter the matrix elements : ";

for(i=0;i<5;i++)
{
  for(j=0;j<5;j++)
  {
   cin>>a[i][j];
  }
}

cout<<"\nThe matrix is : "<<endl;

for(i=0;i<5;i++)
{
  for(j=0;j<5;j++)
  {
   cout<<a[i][j]<<" ";
   sum=sum+a[i][j];
  }
cout<<" => "<<sum;
cout<<endl;
sum=0;
}

cout<<endl;

/*for(i=0;i<5;i++)
{
  for(j=0;j<5;j++)
  {
   sum=sum+a[i][j];
  }
cout<<"\nSum of line "<<i+1<<" = "<<sum;
sum=0;
}*/

getch();
}
