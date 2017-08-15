/*


arr[50];

  10 , 20 , 30 , 40 , 50 , 60
  60 , 50 , 40 , 30 , 20 , 10


*/


#include<iostream.h>
#include<conio.h>
void main(){
int a[50],b,n;

cout<<"Enter the no. of elements\n";
cin>>n;

cout<<"\nEnter the elements ";

for(int i=0;i<n;i++)
{
cin>>a[i];
}

for(int j=n-1,i=0;j>=n/2;j--,i++) //j=5
{
b=a[j];
a[j]=a[i];  //a[3]<=>a[2]
a[i]=b;
}

for(int i=0;i<n;i++)
{
cout<<a[i];

if(i<(n-1))
cout<<",";
}

getch();
}