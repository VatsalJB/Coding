#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

//int c=0;

class library
{
  char bname[20],status[10];
  float price,dp;
  int disc;

  public :
  int i;

  void input()
  {
   cout<<"\n\nEnter the book name : ";
   gets(bname);

   cout<<"\nEnter the price : ";
   cin>>price;

   cout<<"\nEnter the status of the book : \n1.Issued\n2.Available\n";
   cin>>i;

   if(i==1)
   strcpy(status,"Issued");
   else
   strcpy(status,"Available");
  }

  int count()
  {
   static int c=0;

   if(price<200)
   c++;

   return c;
  }

  void discount(){
   if(price<200)
   {
    disc=0;
    dp=price;
   }
   else
     if(price<300)
     {
      disc=5;
      dp=price-price*0.05;
     }
     else
       if(price<400)
       {
        disc=10;
        dp=price-0.1*price;
       }
       else
       {
        disc=15;
        dp=price-0.15*price;
       }
    }

  void display()
  {
   cout<<"\n\nName of the book : "<<bname;
   cout<<"\nStatus : "<<status;
   cout<<"\nPrice : "<<price;
   cout<<"\nDiscount = "<<disc;
   cout<<"\nDiscounted price = "<<dp;
  }

};

void main(){
library lib1,lib2,lib3;

lib1.input();
lib1.discount();
lib1.display();
lib1.count();

lib2.input();
lib2.discount();
lib2.display();
lib2.count();

lib3.input();
lib3.discount();
lib3.display();


cout<<"\n\nNo. of books below Rs. 200 are : "<<lib3.count();

getch();
}
