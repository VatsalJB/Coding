/*
A.P.= 1,3,5,7,9,.......
H.P.= 1, 1/3, 1/5, 1/7 .......
G.P.= 2,4,8,16,32.....

5
45
345
2345
12345

9
89
789
.
.
.
1234...9

*/
#include<iostream.h>
#include<conio.h>
void main(){
int n,a=1,c;

cout<<"ENter a no. ";
cin>>n;

c=n;       //c=9

while(a<=c) //a=1,2
{
       while(n<=c)    //n=9,10,
       {
       cout<<n;  //9,89
       n++;    //n=10
       }
cout<<endl;

n=n-(a+1); //n=8

++a;     //a=2
}

getch();
}

