#include<iostream.h>
#include<conio.h>
void line(char ch);

void main(){
cout<<"Enter the char ";
char ch;
cin>>ch;

line(ch);
cout<<"\nYou have called function line\n";
line(ch);

getch();
}

void line(char ch){
for(int i=0;i<50;i++)
cout<<ch;
}
