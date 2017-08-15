#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct student{
char name[20];
int roll;
float marks;
}s[3];

void main(){
int i;

for(i=0;i<3;i++){
cout<<"Enter the name of student "<<(i+1)<<" : ";
gets(s[i].name);

cout<<"\nEnter the roll no. : ";
cin>>s[i].roll;

cout<<"\nEnter the marks : ";
cin>>s[i].marks;
}

cout<<"\nROLL NO.         NAME               MARKS\n";

for(i=0;i<3;i++)
{
cout<<"\n"<<s[i].roll<<"                "<<s[i].name<<"                 "<<s[i].marks;
}

getch();
}