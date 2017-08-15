#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;

    j=scanf("%c",&i);
    printf("%d",i);
    printf("\n%c",i);
    printf("\n%f",i);
    printf("\n%d",j);

    j=scanf("%d",&i); //Enter a char
    printf("%d",i);
    printf("\n%c",i);
    printf("\n%f",i);
    printf("\n%d",j);

    scanf("%f",&i);
    printf("%d",i);
    printf("\n%c",i);
    printf("\n%f",i);


    return 0;
}
