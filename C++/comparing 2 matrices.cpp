#include<iostream.h>
#include<conio.h>
void main(){
int a[3][3],b[3][3],i,j;

cout<<"Enter the first matrix";

for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   cin>>a[i][j];
}

cout<<"\nEnter the second matrix";

for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   cin>>b[i][j];
}

cout<<"\nFirst matrix is : \n";

for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   cout<<a[i][j]<<"  ";
cout<<endl;
}

cout<<"\nSecond matrix is : \n";

for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   cout<<b[i][j]<<"  ";
cout<<endl;
}

for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   if(a[i][j]!=b[i][j])
   break;

if(j!=3)
{
 cout<<"\nThe matrices are not equal";
 break;
}
}

if(i==3)
cout<<"\nThe matrices are equal";

getch();
}
