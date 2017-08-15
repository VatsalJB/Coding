#include<iostream.h>
#include<conio.h>
#include<math.h>
void main(){
int mar;
cout<<"Enter the marks ";
cin>>mar;

if (mar<=60)
cout<<"\n fail";
else
   {if (mar<=70)
    cout<<"\n d grade";
    else
       {if (mar<=80)
        cout<<"\n c grade";
        else
            {if (mar<=90)
             cout<<"\n b grade";
             else

                 cout<<"\n a grade";
                 
             }
        }
    }


getch();
}
