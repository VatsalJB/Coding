#include<iostream.h>
#include<conio.h>
void main(){
int A[3][3],B[3][3],C[3][3],i=0,j=0,k=0;

cout<<"Enter the first matrix\n";

for(;i<3;i++)
{
   for(;j<3;j++)
   {
    cin>>A[i][j];
   }
cout<<endl;
j=0;
}

cout<<"\nEnter the second matrix\n";

for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   {
    cin>>B[i][j];
   }
cout<<endl;

}

for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   {
     C[i][j]=0;

     for(;k<3;k++)
     {
      C[i][j]=C[i][j]+A[i][k]*B[k][j];
     }
   k=0;
   }
}

cout<<"\nTheir product is:\n";

for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   {
    cout<<C[i][j]<<" ";
   }
cout<<endl;
}

getch();
}
