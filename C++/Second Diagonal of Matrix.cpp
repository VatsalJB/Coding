#include<iostream.h>
#include<conio.h>
void main(){
int A[3][3],i,j,k=2,sum=0,m=0;

cout<<"Enter the matrix\n";


for(i=0;i<3;i++)
  for(j=0;j<3;j++)
  cin>>A[i][j];

cout<<endl;

for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   {
    if(i==m&&j==k)
    {
    sum=sum+A[i][j];
    cout<<A[i][j];
    }
    else
    cout<<" ";
   }
k--;
m++;
cout<<endl;
}

cout<<"\nSum of 2nd diagonal is "<<sum;

getch();
}

/*
123        02
456      11
789    20
*/