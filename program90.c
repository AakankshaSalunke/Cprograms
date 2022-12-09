#include<stdio.h>

int main()
{
    int i = 0;

    printf("________________________*************************________________________\n");
    printf("                              ASCII Table\n");
    printf("________________________*************************________________________\n");
    printf("Character\t Decimal\t Hexadecimal\t Octal\n");

    for(i = 0; i <= 127; i++)
    {
        printf("%c \t %d \t %x \t %o \n",i,i,i,i);
    }

    return 0;
}