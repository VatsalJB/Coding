
#include<iostream.h>
#include<conio.h>
void main(){
int a[4][4],i,j;

for(i=0;i<4;i++)
{
  for(j=0;j<4;j++)
  {
    if(i%2==0)
    a[i][j]=1;
    else
    a[i][j]=0;
  }
}

for(i=0;i<4;i++)
{
  for(j=0;j<4;j++)
  cout<<a[i][j]<<" ";

cout<<endl;
}

getch();
}