#include<iostream.h>
#include<conio.h>
void main(){
int a[4][4],i,j,k=1;

for(i=0;i<4;i++)
{
   for(j=0;j<4;j++)
   {
     if((i+j)%2==0)
     {
      a[i][j]=k;
      k=0;
     }
     else
     {
      a[i][j]=k;
      k=1;
     }
   }

if(k==0)
k=1;
else
k=0;

}

for(i=0;i<4;i++)
{
   for(j=0;j<4;j++)
   cout<<a[i][j]<<" ";

cout<<endl;
}

getch();
}