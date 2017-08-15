/*

array[10]
10, 20 ,30 , 40 , 50 , 60..........
20 , 10 , 40 , 30 , 60 , 50


*/
#include<iostream.h>
#include<conio.h>
void main(){
int a[10];

cout<<"Enter the array elements\n";

for(int i=1;i<10;i=i+2)
{
cin>>a[i]>>a[i-1];
}

for(int i=0;i<10;i++)
{
cout<<a[i];

if(i<9)
cout<<",";
}

/*for(int i=1;i<10;i=i+2)
{

cout<<a[i]<<","<<a[i-1];

if(i<9)
cout<<",";
}
*/

getch();
}