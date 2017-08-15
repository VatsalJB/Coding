/*


  create show function which accept one int and one char value and print char
  to given int number of times.

*/
#include<iostream.h>
#include<conio.h>
void show(int n,char a){

cout<<endl;

for(;n>0;n--)
cout<<a;

}

void main(){
int n;
char a;

cout<<"Enter the number : ";
cin>>n;

cout<<"\nEnter the char : ";
cin>>a;

show(n,a);

getch();
}