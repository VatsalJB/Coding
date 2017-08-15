#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;
   //int *arr=(int*)malloc(10*4);
   int arr[10];
  // printf("\nAfter malloc\n");
   int arr1[10];

   for(i=0;i<15;i++)
    arr[i]=i;

   for(i=0;i<15;i++)
        printf("%d ",arr[i]);


   printf("%d %d",arr1[0],arr1[1]);



    return 0;
}
