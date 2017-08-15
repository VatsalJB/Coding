#include<iostream.h>
#include<conio.h>
void main(){
int i=0,ua=0,ub=0,uc=0,fail=0;

while(i<=5)
{   switch(i++)   //i=1
   {
    case 1 :
    case 2 :++ua;
    case 3 :
    case 4 :++ub;
    case 5 :++uc;
    default : ++fail;
   }
}

cout<<"ua="<<ua<<"\t"<<"ub="<<ub<<endl;
cout<<"uc="<<uc<<"\t"<<"fail="<<fail;

getch();
}
