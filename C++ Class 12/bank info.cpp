#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class bank
{
 float bal;
 char pass[20],vpass[20];
 int bcode;

 public :

 float temp;
 int i;

 void initialise()
 {
  cout<<"\nEnter your balance : ";
  cin>>bal;
 }

 void withdraw()
 {
  cout<<"\nEnter the amount to be withdrawn : ";
  cin>>temp;

  bal=bal-temp;

  if(bal<0)
  {
   cout<<"\nNot enough amount is present.";
   cout<<"\nWithdrawal failed.";
   bal=bal+temp;
  }
 }


 void deposit()
 {
  cout<<"\nEnter the amount to be deposited : ";
  cin>>temp;

  bal=bal+temp;
 }

 void currentbal()
 {
  cout<<"\nYour available balance is : "<<bal;
 }

 void setpass(){
 cout<<"\nSet a password for your account : ";
 gets(pass);
 }

 void showpass(){
 cout<<"\nYour password is : "<<pass;
 }

 void resetpass(){
 cout<<"\nEnter your new password : ";
 gets(pass);
 }

 void validate(){
 cout<<"\nEnter your password : ";
 gets(vpass);

 if(strcmp(pass,vpass))
 {
  i=0;
  cout<<"\nIncorrect password.";
  cout<<"\nAccess Denied.";
  cout<<"\nDo you want to try again ?\n1.Yes\n2.No\n";
  cin>>i;
  }
  else
  i=0;

 }

 int bankname()
 {
  cout<<"\nEnter the bank code : ";
  cin>>bcode;
  return bcode;
 }

};

void main(){
bank b1,b2;
int i,j,k;
int code1,code2;

cout<<"CUSTOMER 1\n\n";

code1=b1.bankname();

b1.setpass();

b1.initialise();

for(;i!=6;)
{
cout<<"\n\nEnter your choice : ";
cout<<"\n1.Withdraw money\n2.Deposit money\n3.View password\n4.Reset password\n5.Available Balance\n6.Exit\n";
cin>>i;

if(i==1)
{
 b1.withdraw();
 b1.currentbal();
}
else
  if(i==2)
  {
   b1.deposit();
   b1.currentbal();
  }
    else
      if(i==3)
      b1.showpass();
      else
        if(i==4)
        {
         b1.validate();

           if(b1.i==1)
            for(;b1.i!=2;)
            b1.validate();

            if(b1.i==2)
            continue;

         b1.resetpass();
        }
        else
          if(i==5)
          b1.currentbal();
          else
            if(i==6)
            break;
            else
               if(i!=6)
               {
                cout<<"\nEnter a correct choice ";
                continue;
               }

  cout<<"\nDo you want to perform more operations ?\n1.Yes\n2.No\n";
  cin>>j;

  if(j==1)
  {
   b1.validate();

   if(b1.i==1)
      for(;b1.i!=2&&b1.i!=0;)
      b1.validate();

   if(b1.i==0)
   continue;

   if(b1.i==2)
   break;
  }
  else
  break;

}

clrscr();

cout<<"CUSTOMER 2\n\n";

code2=b2.bankname();

b2.setpass();

b2.initialise();

for(;i!=6;)
{
cout<<"\n\nEnter your choice : ";
cout<<"\n1.Withdraw money\n2.Deposit money\n3.View password\n4.Reset password\n5.Available Balance\n6.Exit\n";
cin>>i;

if(i==1)
{
 b2.withdraw();
 b2.currentbal();
}
else
  if(i==2)
  {
   b2.deposit();
   b2.currentbal();
  }
    else
      if(i==3)
      b2.showpass();
      else
        if(i==4)
        {
         b2.validate();

           if(b2.i==1)
            for(;b2.i!=2;)
            b2.validate();

            if(b2.i==2)
            continue;

         b2.resetpass();
        }
        else
          if(i==5)
          b2.currentbal();
          else
            if(i==6)
            break;
            else
               if(i!=6)
               {
                cout<<"\nEnter a correct choice ";
                continue;
               }

  cout<<"\nDo you want to perform more operations ?\n1.Yes\n2.No\n";
  cin>>j;

  if(j==1)
  {
   b2.validate();

   if(b2.i==1)
      for(;b2.i!=2&&b2.i!=0;)
      b2.validate();

   if(b2.i==0)
   continue;

   if(b2.i==2)
   break;
  }
  else
  break;

}

clrscr();

if(code1!=code2)
cout<<"Their accounts are in different banks.";
else
cout<<"Their accounts are in same bank.";

getch();

}
