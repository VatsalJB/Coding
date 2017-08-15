#include<iostream.h>
#include<conio.h>

class find
{
 int num,digitsum;

 public :

 void input(){
 cout<<"\nEnter the number : ";
 cin>>num;
 }

 void sum(){
 digitsum=0;
 int c=num;

 for(;c>0;c=c/10)
 digitsum=digitsum+(c%10);

 //cout<<"\nThe sum of digits = "<<digitsum;
 }

 int i,j,bnum[20],bdsum[20];

 void binary(){

 //cout<<"\nBinary form of the number "<<num<<" = ";
 int c=num,d=digitsum;

 for(i=0;c>0;c=c/2,i++)
 bnum[i]=c%2;

 i--;

 //for(;i>=0;i--)
 //cout<<bnum[i];

 //cout<<"\nBinary form of digit sum ("<<digitsum<<") = ";

 for(j=0;d>0;d/=2,j++)
 bdsum[j]=d%2;

 j--;

 //for(;i>=0;i--)
 //cout<<bdsum[i];
 }

 void display(){
 cout<<"\n\nThe number is : "<<num;
 cout<<"\nSum of digits = "<<digitsum;
 cout<<"\nBinary value of the number = ";

 for(;i>=0;i--)
 cout<<bnum[i];

 cout<<"\nBinary value of digits sum = ";

 for(;j>=0;j--)
 cout<<bdsum[j];
 }

 void clearvalues(){
 num=digitsum=0;
 }

};

void main(){
find f;

int i;

for(;i!=2;)
{
 f.input();
 f.sum();
 f.binary();
 f.display();
 f.clearvalues();

 cout<<"\n\nDo you want to enter another number ?\n\n1.Yes\n2.No";
 cin>>i;
}

getch();
}