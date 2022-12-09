#include<stdio.h>

int main()
{
    char Arr[30];

    printf("Please enter full Name : ");
    // scanf("%s",Arr);
    scanf("%[^'\n']s",Arr);    // Regular expression

    printf("Your Name is : %s\n",Arr);

    return 0;
}