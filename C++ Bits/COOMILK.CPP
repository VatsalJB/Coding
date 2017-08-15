#include<iostream.h>
#include<conio.h>
#include<stdio.h>

//using namespace std;

int main()
{
  int t,min,valid=1;
  char food[50][7];

  cin>>t;

  while(t--)
  {

        cin>>min;

        for(int i=0;i<min;i++)
        cin>>food[i];

        for(int i=1;i<min-1;i++)
        {

            if(food[i-1][0]=='c'&&food[i][0]=='c')
            {
             valid=0;
             break;
            }

        }

        if(food[min-1][0]=='c')
        valid=0;

        if(valid==1)
        cout<<"YES\n";
        else
        cout<<"NO\n";

   }

getch();
return 0;
}



