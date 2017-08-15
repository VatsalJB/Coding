#include<iostream.h>
#include<conio.h>
void main(){
int a,b;
a=1;
b=2;
while(++a<=5)//a=2,4
{
cout<<"\nb= "<<++b<<"a= "<<a++<<"new b = "<<b<<endl; //b=3,4   a=2,4        new b =3,4
//a=b; //a=3,4,5
//cout<<"\na= "<<a;//a=3,4,5

}
cout<<"\nValue of b after loop = "<<b;//4
cout<<"\nValue of a after loop = "<<a;//6

getch();
}