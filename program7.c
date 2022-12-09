#include<stdio.h>

int Multiplication(int ivalue1, int ivalue2)
{
    int iAns =0;
    
    iAns=ivalue1 * ivalue2;

    return iAns;
}

int main()
{
    int ino1=0, ino2=0;
    int imult=0;

    printf("Enter first number : \n");
    scanf("%d",&ino1);

    printf("Enter second number : \n");
    scanf("%d",&ino2);

    imult = Multiplication(ino1,ino2);

    printf("Multiplication is : %d\n",imult);
    
    return 0;
}