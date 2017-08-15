/*


4 , 6 , 7 ,1, ......

10,13,8....

*/
#include<iostream.h>
#include<conio.h>
void main(){
int a[10];

cout<<"Enter the numbers ";

for(int i=0;i<10;i++)
{
cin>>a[i];
}

for(int i=0;i<10;i=i+2)
{
cout<<"\nSum "<<i+1<<" = "<<a[i]+a[i+1];
}

getch();
}
