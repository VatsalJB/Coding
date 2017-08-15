#include<iostream.h>
#include<conio.h>

void main(){

cout<<"\nENter the dimensions of matrix (m x n): ";
int m,n;
cin>>m>>n;

int* A = new int(m*n);

cout<<"\nEnter the elements (row wise) : \n";

for(int i=0;i<m*n;i++)
cin>>A[i];

cout<<"\nThe matrix is : \n";

for(int i=0;i<m;i++)
{

   for(int j=0;j<n;j++)
     if(i*n+j!=0)
       A[0]+=A[i*n+j];

}



for(int i=0;i<m;i++)
{
  // cout<<A[i]<<" ";

   for(int j=0;j<n;j++)
   {
    cout<<A[i*n+j]<<" ";
    }

  // if((i+1)%n==0)
   cout<<endl;
}

delete A;

getch();
}   

