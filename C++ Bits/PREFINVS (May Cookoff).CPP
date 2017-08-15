#include<iostream.h>
#include<stdio.h>

using namespace std;

int main()
{
   char s[100000];
   int ops,len;

   gets(s);

   for(len=0;s[len]!='\0';len++);

   ops=0;

   len--;

   for(;len>=0;)
   {
      for(;s[len]!='1'&&len>=0;len--);

      for(int i=0;i<=len;i++)
        if(s[i]=='0')
        s[i]='1';
        else
        s[i]='0';

      if(len>=0)
      ops++;
   }


   cout<<ops;

   return 0;
}
