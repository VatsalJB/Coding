/*book:book name,  id , price, author, no of copies,no of copies left, netamount
methods: constructor1 () , consrucyt(bname, id , price, author, no of copies)
			copiesleft(int)=> return the no of copies
         netamount(int)=> return netamount
         comparebook(author1, autor2)=> return trueif book is same or false
         search(book[] , book name)=>find whether book name present or not.
  */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class book
{
  char bookname[30];
  int id;
  float price;
  char author[30];
  int no_copy;
  int no_leftcopy;
  float net_amount;

  public :

  book();
  book(char [],int,float,char [],int);
  int copiesleft(int);
  float net(int);
  int compare(char [],char []);
  void search(book [],char []);
};


book :: book()
{
  strcpy(bookname," ");
  id=0;
  price=0.0;
  strcpy(author," ");
  no_copy=0;
  no_leftcopy=0;
  net_amount=0.0;
}

book :: book(char bname[],int ID,float bprice,char bauthor[],int no_cpy)
{
  strcpy(bookname,bname);

  id=ID;

  price=bprice;

  strcpy(author,bauthor);

  no_copy=no_cpy;
}


int book :: copiesleft(int sold)
{
  no_leftcopy=no_copy-sold;

  return no_leftcopy;
}

float book :: net(int no_books)
{
  net_amount=price*no_books;

  return net_amount;
}

int book :: compare(char ath1[],char ath2[])
{
  return (!strcmp(ath1,ath2));
}

void book :: search(book b[],char bname[])
{
  int i;

  for(i=0;i<3;i++)
  if(!strcmp(b[i].bookname,bname))
  {
    cout<<"\nBook exists.";
    break;
  }

  if(i==3)
  cout<<"\nBook does not exist.";
}



void main()
{
 book b1[3];

 for(int i=0;i<3;i++)
 {

  cout<<"\nBOOK "<<i+1;

  char bookname[30];
  int id;
  float price;
  char author[30];
  int no_copy;

  cout<<"\nEnter book name : ";
  gets(bookname);

  cout<<"\nEnter book ID : ";
  cin>>id;

  cout<<"\nEnter price per book : ";
  cin>>price;

  cout<<"\nEnter author name : ";
  gets(author);

  cout<<"\nEnter total number of copies : ";
  cin>>no_copy;

  book temp(bookname,id,price,author,no_copy);

  b1[i]=temp;


  cout<<"\nEnter no. of copies sold : ";
  int sold;
  cin>>sold;

  cout<<"\nEnter no. of purchased books : ";
  int nbook;
  cin>>nbook;

  cout<<"\nEnter the first author name to be compared : ";
  char aname[30];
  gets(aname);

  cout<<"\nEnter the second author name to be compared : ";
  char aname1[30];
  gets(aname1);

  int j;
  float amount;

  j=b1[i].copiesleft(sold);

  cout<<"\nNo. of copies left : "<<j;

  amount=b1[i].net(nbook);

  cout<<"\nTotal amount : Rs."<<amount;

  j=b1[i].compare(aname,aname1);

  if(j==1)
  cout<<"\nAuthor names match.";
  else
  cout<<"\nAuthor names do not match.";
 }

 cout<<"\nEnter the book name to be searched : ";
 char bname[30];
 gets(bname);

 b1[0].search(b1,bname);


 getch();

}
