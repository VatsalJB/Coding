#include<iostream.h>
#include<conio.h>

struct node
{
  int i;
  node* next;
  static int count = 0;
};


node* create(int ele)
{
  node* ptr = new node;
  ptr->i=ele;
  ptr->next=NULL;
  ptr->count++;

  return ptr;
}


node* push(node *top)
{
  int k;

  cout<<"\nENter the element to be pushed : ";
  cin>>k;

  node *new_node = create(k);

  if(top==NULL)
  top=new_node;
  else
  {
   new_node->next=top;
   top=new_node;
  }

  cout<<"\nPush successful.";

  return top;
}


node* pop(node *top)
{
  if(top==NULL)
  cout<<"\nUnderflow !! Pop failed.";
  else
  {
    node *temp;
    temp=top;
    top=top->next;
    top->count--;

    delete temp;

    cout<<"\nPop successful.";
  }

  return top;
}


void display(node *top)
{
  cout<<"\nThe stack is : \n\n";

  if(top==NULL)
  cout<<"//Stack Empty//";
  else
  for(int i=0;top;top=top->next,i++)
  {
    cout<<top->i;

    if(i==0)
    cout<<" <-";

    cout<<endl;
  }
}


void disp_top(node* top)
{
  if(top==NULL)
  cout<<"\nThe top element is : None";
  else
  {
   cout<<"\nThe top element is : "<<top->i;
   cout<<"\nIndex of top is : "<<top->count-1;
  }
}

void count_elem(node* top)
{
  cout<<"\nNo. of elements in stack = "<<top->count<<endl;
}

void main(){
node *top = NULL;

for(int i=0;i!=6;)
{
  cout<<"\nChoose your operation : \n\n";
  cout<<"1.Push\n2.Pop\n3.Display Stack\n4.Display Top\n5.No. of elements\n6.Exit\n";
  cin>>i;

  switch(i){

  case 1 : top=push(top);

  			  break;

  case 2 : top=pop(top);

  			  break;

  case 3 : display(top);

  			  break;

  case 4 : disp_top(top);

  			  break;

  case 5 : count_elem(top);

           break;

  case 6 : cout<<"\nExiting...";

           break;

  default : cout<<"\nENter a correct choice.";
  }

}

getch();
}