/*
S=a^2/(a+2)!  + a^3/(a+3)! +  a^4/(a+4)!…………nterms.
*/

#include<iostream.h>
#include<conio.h>
void main(){
int n,a,i,e;
float sum=0,d=1,b=2,f=1;

cout<<"Enter the no. ";
cin>>a;

cout<<"\nEnter the no. of terms ";
cin>>n;

i=a;


while(b<=(n+1))
{
e=b;
        while(e)
        {
        d=d*a;
        e--;
        }
i=i+b;
            while(i>0)
            {
            f=f*i;
            i--;
            }

/*cout<<"Square = "<<d<<endl;
cout<<"\nFactorial = "<<f;*/

sum=sum+d/f;

d=1;
++b;
f=1;
i=a;
}

cout<<"\nSum = "<<sum;

getch();
}