#include<stdio.h>

int main()
{
    int ino1=0, ino2=0;
    int imult=0;

    printf("Enter first number : \n");
    scanf("%d",&ino1);

    printf("Enter second number : \n");
    scanf("%d",&ino2);
    
    imult=ino1 * ino2;

    printf("Multiplication is : %d\n",imult);
    
    return 0;
}