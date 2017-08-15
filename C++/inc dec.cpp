#include<iostream.h>
#include<conio.h>
void main(){
int a,b;
a=1;
b=2;
while(a++<=5)//a=2,3,4,5
{
cout<<"\nb= "<<++b<<endl; //b=3,4,5,6,7
//a=++b; //a=4  ,b=4
cout<<"\na= "<<a;//a=2,3,4,5,6

}
cout<<"\nValue of b after loop = "<<b;//6
cout<<"\nValue of a after loop = "<<a;//5

getch();
}

/* 1    2
   2    3*/