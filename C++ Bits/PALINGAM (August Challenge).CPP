#include<stdio.h>
#include<string.h>

int palindrome(char str[])
{
  int size=strlen(str);
  
 // printf("\n%c",str[size-1]);

  for(int i=0,j=size-1;i<=size/2;i++,j--)     //size-1 = '\0'
  if(str[i]!=str[j])
  return 0;

  return 1;
}

int main()
{
   int t;

   scanf("%d",&t);

   while(t--)
   {
     char s[501],t[501],w[1002];

     int flag=0;

     scanf(" %s",s);
     scanf(" %s",t);

     for(int i=0,j=0,k=0;t[j]!='\0';)
     {
         if(i<=j)
         {
           w[k]=s[i];
           k++;
           i++;

           w[k]='\0';

           if(palindrome(w)&&i!=1)
           {
             flag=1;
             break;
           }
         }
         else
         {
           w[k]=t[j];
           k++;
           j++;

           w[k]='\0';

           if(palindrome(w))
           {
             flag=2;
             break;
           }
         }
     }

     if(flag==1)
     printf("A\n");
     else
     printf("B\n");
   }

   return 0;
}
