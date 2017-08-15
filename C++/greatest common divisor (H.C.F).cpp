#include<iostream.h>
#include<conio.h>

void main(){
int n1,n2;
cin>>n1>>n2;
int get(int,int);
cout<<get(n1,n2);
getch();
}


get(int n1,int n2)
{
 int temp;
 while(n2)
 {
  temp=n2;
  n2=n1%n2;
  n1=temp;
 }
return n1;
}

