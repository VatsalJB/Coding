#include<iostream.h>
#include<conio.h>

void fun(char *a)
{
  //*a++;
  *a=*a+1;
  cout<<*a;
}

void main(){
char arr[10];

cout<<"\nEnter the array : ";
cin.getline(arr,10);

cout<<"\nThe array is : ";

for(int i=0;arr[i]!='\0';i++)
fun(&arr[i]);

cout<<endl<<arr;

getch();
}  
