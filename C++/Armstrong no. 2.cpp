#include<iostream.h>
#include<conio.h>
#include<math.h>
void main(){
int a,c,sum=0;

cout<<"Enter the no. ";
cin>>a;


/*for(c;c>0;b=b*10)  //a=371  b=10,
{
c=(a%b)/(b/10);     //c=1,7,3

cout<<c<<endl;

sum=sum+pow(c,3);
}*/
c=a;

for(;a>0;a=a/10)   //371
{
sum=sum+pow(a%10,3); //1

}

if(sum==c)
cout<<"\nIt is an Armstrong no.";
else
cout<<"\nIt is not an Armstrong no.";

getch();
}