#include <stdio.h>
#include <stdlib.h>

int main()
{
   char *ptr=malloc(1);
  ptr++;
  printf("%d",ptr);
  ptr++;
   printf("%d",ptr);

}
