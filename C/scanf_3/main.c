#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b,c;

    scanf("%c",&a); //Try to enter a string (3,4,5 char)
    printf("%c\n",a);

    scanf(" %c",&a); //Enter a char, does not work with %d.will hold same value as before if %d is used. (refer notes)
    printf("\n%c",a);
    printf("\n%d\n",a);

    scanf(" %c%c%c",&a,&b,&c); //Enter string of 3 char, with/without spaces before (works separately)
    printf("\n%c%c%c",a,b,c);
    return 0;
}
