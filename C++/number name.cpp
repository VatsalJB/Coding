#include<iostream.h>
#include<conio.h>
void main(){
int n,b;

cout<<"Enter the no.";
cin>>n;   //432


while(n>=1){
b=n%10;  //b=2,3

n=n/10;  //n=43

    switch(b){
     case 1 : cout<<"\nOne";
     break;
     case 2 : cout<<"\nTwo";
     break;
     case 3 : cout<<"\nThree";
     break;
     case 4 : cout<<"\nFour";
     break;

     }
}

getch();
}
