#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<stdlib.h>
void main(){
randomize();

int Num,Rndnum,i=1,t;

cin>>Num;

Rndnum=random(Num)+7;


while(i<=Rndnum)
{
//cout<<i<<" ";
t=random(i);
cout<<t<<endl;

i++;
}

getch();
}
/*
0
0,1
0,1,2
0,1,2,3
0,1,2,3,4
0,1,2,3,4,5
0,1,2,3,4,5,6
0,1,2,3,4,5,6,7
*/