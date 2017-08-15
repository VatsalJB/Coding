#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,*ptr;
  scanf("%d",&i);
  ptr=&i;
  scanf("%d",6356744); // same as scanf("%d",ptr); where 6356744 is the address of i;
  printf("\nptr : %u",ptr);
  printf("\nThe new value of i is : %d %d",i,*ptr);

    return 0;
}
