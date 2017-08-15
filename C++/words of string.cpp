#include<iostream.h>
#include<conio.h>
void main(){
char a[20];
int i=0,j,k=0;

cout<<"Enter the sentence ";       //India is great
cin.getline(a,20);

for(;a[i]!='\0';i++);
j=i-1;              //j=13

i=0;

for(;a[i]!='\0';i++)
{

  if(a[i]==' '||i==j)  //i=5,8,13
  {
    cout<<endl;
     while(k<i)
     {
      cout<<a[k];   //India   is
      k++;
     }

   k++;     //k=6,9
  }   //i=6,9
}

cout<<a[j];

getch();
}
