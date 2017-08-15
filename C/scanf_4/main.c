#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;

    j=scanf("%d",&i); //Enter a character
    printf("\n%d",i);
    printf("\n%d",j);

    j=scanf(" %c",&i); //Automaticaly inputs the previous character, even if there is a space
    printf("\n%d",i);
    printf("\n%d",j);

    return 0;
}
