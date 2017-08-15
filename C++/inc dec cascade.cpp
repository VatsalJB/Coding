#include<iostream.h>
#include<conio.h>
void main(){
int a,b;
a=1;
b=2;
while(++a<=5)//a=2,5
{
cout<<"\nb= "<<++b<<"a= "<<a++<<"new a = "<<a++<<endl; //b=3,4   a=3,6        new a =2,5


}
cout<<"\nValue of b after loop = "<<b;//4
cout<<"\nValue of a after loop = "<<a;//8

getch();
}