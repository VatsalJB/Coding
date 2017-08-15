#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node* next;
};

int main()
{
  struct node* head = (struct node*)malloc(sizeof(struct node));
  struct node* temp=NULL;

  head->data=69;
  head->next=(struct node*)malloc(sizeof(struct node));

  head->next->data=70;
  head->next->next=NULL;

  temp=head;

  temp=temp->next;
//  temp=temp->next;
  printf("%d",temp->data);

  return 0;
} 
