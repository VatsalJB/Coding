/*

  0    ,         2 ,          6 ,       12, 20 , 30 ........nterms
  0*2 , (0+1)*2 , (0+1+2)*2 , (0+1+2+3)*2,......
  0,0+2,0+2+4,0+2+4+6,0+2+4+6+8,
  1^2-1,2^2-2,3^2-3......
  */


#include<iostream.h>
#include<conio.h>
void main(){
int n,b=1;

cout<<"Enter the no. of terms";
cin>>n;

/*while(b<n){

sum=sum+b;

cout<<sum*2;

if(b<(n-1))
cout<<",";

++b;
}*/

while(b<=n){
cout<<b*b-b;

if(b<n)
cout<<",";

++b;
}

getch();
}
