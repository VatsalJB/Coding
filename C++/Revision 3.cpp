#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
  char str[]="Vatsal Badami";
  char *ptr=str;
  char *cptr[13];

  for(int i=0;i<13;i++)
  cptr[i]=ptr+i;

  cout<<"\nThe characters are : \n";

  for(int i=0;i<13;i++)
  {
   char ch=*cptr[i];

   putchar(*cptr[i]);
   cout<<endl;

   cout<<"\ncptr[i] : ";

   cout<<++*cptr[i]<<endl;
  }

  cout<<endl<<cptr;

  char ar[10];

  cout<<endl<<&ar;

/*
  cout<<*(&ptr);

  ptr++;

 // str++;

  cout<<endl<<ptr;
  cout<<endl<<str;

  cout<<endl<<ptr<<" "<<ptr++<<" "<<ptr<<" "<<str;
  		//						 tsal	  ats	  ats		Vat

  char *cptr[5];
  int i=0;

  cptr[0]=ptr;

  cout<<endl<<cptr[0];
  cout<<endl<<ptr;
                                    // sal
  cptr[i]++;

  cout<<endl<<cptr<<" same";
  cout<<endl<<*cptr;

  cptr[i]++;    // add of a

  ptr++;       //add of s
  cptr[i]=ptr; // add of s

  cout<<endl<<*cptr;     // sal...

  cout<<"\nLoop starts\n\n";

  for(int j=0;j<5;j++)
  {
    cptr[j]=ptr;  // [0]=add of s, [1]=add of a
    ptr++;        // s,1a,2l,3 ,4B,5a

    cout<<endl<<cptr[j++];
    cout<<endl<<ptr;
  }

  cout<<"\nLoop ends\n";

  cout<<endl<<cptr;
  cout<<endl<<ptr;  // add of (B)a-> adami
*/
  getch();
}