/*


  5 ,3 , 7 ,4  ,5


  1
  12
  123
  1234
  12345

  +++++++++++++++++++++++++++++++
  1
  12
  123
  ++++++++++++++++++++
  1
  12
  123
  123.....7

*/

#include<iostream.h>
#include<conio.h>
void main(){
int a[5],b=1,c=1,i=0,d=1;

cout<<"Enter the 5 nos. ";

for(;i<5;i++)
cin>>a[i];

i=0;

cout<<endl;

while(b<=5)
{

    while(a[i]>0)
    {
       while(c<=d)
       {
        cout<<c;
        c++;
       }

     cout<<endl;

     c=1;
     d++;
     a[i]--;
    }

cout<<"++++++++++++++++++++++++++"<<endl;
b++;
i++;
d=1;
}

getch();
}







