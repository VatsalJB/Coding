 /*

 1   0    1    0
 0	   1	 0		1
 1		0	 1 	0
 0		1	 0	   1



 */

#include<iostream.h>
#include<conio.h>
void main(){
int a[4][4],i,j;

for(i=0;i<4;i++)
{
   for(j=0;j<4;j++)
   {
     if(i%2==0)
        if(j%2==0)
        a[i][j]=1;
        else
        a[i][j]=0;
     else
        if(j%2==0)
        a[i][j]=0;
        else
        a[i][j]=1;
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