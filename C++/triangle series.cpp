#include<iostream.h>
#include<conio.h>
void main(){
int a=1,b=1,c=1;

while(a<=4)                      //1
{                               //12
  while(b<=c)                    //123
  {
  cout<<b;
  ++b;
  }
cout<<endl;
b=1;
++c;
++a;                            //1234
}                               //12345

getch();
}
