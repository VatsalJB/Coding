#include<iostream.h>
#include<conio.h>

/*void main(){
int x=1,y=3;
int &swap(int &,int &);
swap(x,y)=5;
//cout<<"\n"<<swap(x,y);
getch();
}

int &swap(int &x,int &y){
int temp;
temp=x;
x=y;
y=temp;
cout<<"x="<<x<<"y="<<y;
return x;
}
*/

void main(){
float min(float&,float&);
int a=1,b=4;
float c;
min(a,b)=5;

cout<<a<<c;
}

float min(float&a,float&b)
{
if(a<b)
return a;
else
return b;
}

